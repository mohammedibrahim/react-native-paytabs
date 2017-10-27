package com.mibrahim.paytab;

//Android

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.util.DisplayMetrics;
import android.widget.Toast;
import android.content.res.Configuration;
import android.content.res.Resources;

//React Native
import com.facebook.react.bridge.ActivityEventListener;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.BaseActivityEventListener;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.ReadableMap;

import java.util.Locale;

import paytabs.project.PayTabActivity;

import com.facebook.react.bridge.WritableMap;
import com.facebook.react.bridge.WritableNativeMap;

public class ReactNativePayTabs extends ReactContextBaseJavaModule {

    private Context context;

    private Promise mPickerPromise;

    private final ActivityEventListener mActivityEventListener = new BaseActivityEventListener() {

        @Override
        public void onActivityResult(Activity activity, int requestCode, int resultCode, Intent intent) {

            SharedPreferences paytabs_create_order = context.getSharedPreferences("paytabs_create_order", Context.MODE_PRIVATE);

            String pt_response_code = paytabs_create_order.getString("pt_response_code", "");

            String pt_transaction_id = paytabs_create_order.getString("pt_transaction_id", "");

            String pt_description = paytabs_create_order.getString("pt_description", "");

            WritableMap resultData = new WritableNativeMap();

            resultData.putString( "response_code", pt_response_code);

            resultData.putString( "transaction_id", pt_transaction_id);

            resultData.putString( "description", pt_description);

            mPickerPromise.resolve(resultData);
        }
    };

    public ReactNativePayTabs(ReactApplicationContext reactContext) {
        super(reactContext);
        this.context = reactContext;

        // Add the listener for `onActivityResult`
        reactContext.addActivityEventListener(mActivityEventListener);
    }

    @Override
    public String getName() {
        return "PayTabs";
    }

    @ReactMethod
    public void createOrder(ReadableMap data, final Promise promise) {

        Activity currentActivity = getCurrentActivity();

        if (currentActivity == null) {
            promise.reject("E_ACTIVITY_DOES_NOT_EXIST", "Activity doesn't exist");
            return;
        }

        // Store the promise to resolve/reject when picker returns data
        mPickerPromise = promise;

        String lang = data.hasKey("locale") ? data.getString("locale") : "en" ;
        Locale myLocale = new Locale(lang);
        Resources res = context.getResources();
        DisplayMetrics dm = res.getDisplayMetrics();
        Configuration conf = res.getConfiguration();
        conf.locale = myLocale;
        res.updateConfiguration(conf, dm);
        Intent in = new Intent(context, PayTabActivity.class);

        in.putExtra("pt_merchant_email", data.hasKey("merchant_email") ? data.getString("merchant_email") : ""); //this a demo account fortesting the sdk
        in.putExtra("pt_secret_key", data.hasKey("secret_key") ? data.getString("secret_key") : "");
        in.putExtra("pt_transaction_title", data.hasKey("transaction_title") ? data.getString("transaction_title") : "" );
        in.putExtra("pt_amount", data.hasKey("amount") ? data.getString("amount") : "" );
        in.putExtra("pt_currency_code", data.hasKey("currency_code") ? data.getString("currency_code") : "" ); //Use Standard 3 character ISO
        in.putExtra("pt_shared_prefs_name", "paytabs_create_order" );
        in.putExtra("pt_customer_email", data.hasKey("customer_email") ? data.getString("customer_email") : "" );
        in.putExtra("pt_customer_phone_number", data.hasKey("customer_phone_number") ? data.getString("customer_phone_number") : "" );
        in.putExtra("pt_order_id", data.hasKey("order_id") ? data.getString("order_id") : "" );
        in.putExtra("pt_product_name", data.hasKey("product_name") ? data.getString("product_name") : "" );
        in.putExtra("pt_timeout_in_seconds", data.hasKey("timeout_in_seconds") ? data.getString("timeout_in_seconds") : "-1" ); //Optional

        //Billing Address
        in.putExtra("pt_address_billing", data.hasKey("address_billing") ? data.getString("address_billing") : "" );
        in.putExtra("pt_city_billing", data.hasKey("city_billing") ? data.getString("city_billing") : "" );
        in.putExtra("pt_state_billing", data.hasKey("state_billing") ? data.getString("state_billing") : "" );
        in.putExtra("pt_country_billing", data.hasKey("country_billing") ? data.getString("country_billing") : "" );
        in.putExtra("pt_postal_code_billing", data.hasKey("postal_code_billing") ? data.getString("postal_code_billing") : "" );

        in.putExtra("pt_address_shipping", data.hasKey("address_shipping") ? data.getString("address_shipping") : "" );
        in.putExtra("pt_city_shipping", data.hasKey("city_shipping") ? data.getString("city_shipping") : "" );
        in.putExtra("pt_state_shipping", data.hasKey("state_shipping") ? data.getString("state_shipping") : "" );
        in.putExtra("pt_country_shipping", data.hasKey("country_shipping") ? data.getString("country_shipping") : "" );
        in.putExtra("pt_postal_code_shipping", data.hasKey("postal_code_shipping") ? data.getString("postal_code_shipping") : "" );

        int requestCode = 0;

        currentActivity.startActivityForResult(in, requestCode);
    }
}