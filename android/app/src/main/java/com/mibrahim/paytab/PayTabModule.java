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
import com.facebook.react.bridge.WritableMap;

import java.util.Locale;

import paytabs.project.PayTabActivity;

public class PayTabModule extends ReactContextBaseJavaModule {

    private Context context;

    private Promise mPickerPromise;

    private final ActivityEventListener mActivityEventListener = new BaseActivityEventListener() {

        @Override
        public void onActivityResult(Activity activity, int requestCode, int resultCode, Intent intent) {

            SharedPreferences shared_prefs = context.getSharedPreferences("myapp_shared", Context.MODE_PRIVATE);

            String pt_response_code = shared_prefs.getString("pt_response_code", "");

            String pt_transaction_id = shared_prefs.getString("pt_transaction_id", "");s

            WritableMap map = Arguments.createMap();
            map.putString("response_code", pt_response_code);
            map.putString("transaction_id", pt_transaction_id);

            mPickerPromise.resolve(map);
        }
    };

    public PayTabModule(ReactApplicationContext reactContext) {
        super(reactContext);
        this.context = reactContext;

        // Add the listener for `onActivityResult`
        reactContext.addActivityEventListener(mActivityEventListener);
    }

    @Override
    public String getName() {
        return "PayTab";
    }

    @ReactMethod
    public void createOrder(final Promise promise) {

        Activity currentActivity = getCurrentActivity();

        if (currentActivity == null) {
            promise.reject("E_ACTIVITY_DOES_NOT_EXIST", "Activity doesn't exist");
            return;
        }

        // Store the promise to resolve/reject when picker returns data
        mPickerPromise = promise;

        String lang = "en";
        Locale myLocale = new Locale(lang);
        Resources res = context.getResources();
        DisplayMetrics dm = res.getDisplayMetrics();
        Configuration conf = res.getConfiguration();
        conf.locale = myLocale;
        res.updateConfiguration(conf, dm);
        Intent in = new Intent(context, PayTabActivity.class);

        in.putExtra("pt_merchant_email", "harede0@gmail.com"); //this a demo account fortesting the sdk
        in.putExtra("pt_secret_key", "kuCzGvELL6S6oJE1BFVvfsiLbGqePqGaUjJBPomAufHSZlUB1P7hip2t5tHVTo5OHPpwdM7H1OA1auCcjJtB9w5fZNaSbfGT45pi");
        in.putExtra("pt_transaction_title", "Mr. John Doe");
        in.putExtra("pt_amount", "1");
        in.putExtra("pt_currency_code", "USD"); //Use Standard 3 character ISO
        in.putExtra("pt_shared_prefs_name", "myapp_shared");
        in.putExtra("pt_customer_email", "test@example.com");
        in.putExtra("pt_customer_phone_number", "0097300001");
        in.putExtra("pt_order_id", "1234567");
        in.putExtra("pt_product_name", "Samsung Galaxy S6");
        in.putExtra("pt_timeout_in_seconds", "300"); //Optional

        //Billing Address
        in.putExtra("pt_address_billing", "Flat 1,Building 123, Road 2345");
        in.putExtra("pt_city_billing", "Juffair");
        in.putExtra("pt_state_billing", "Manama");
        in.putExtra("pt_country_billing", "Bahrain");
        in.putExtra("pt_postal_code_billing", "00973");

        //Shipping Address
        in.putExtra("pt_address_shipping", "Flat 1,Building 123, Road 2345");
        in.putExtra("pt_city_shipping", "Juffair");
        in.putExtra("pt_state_shipping", "Manama");
        in.putExtra("pt_country_shipping", "Bahrain");
        in.putExtra("pt_postal_code_shipping", "00973");

        int requestCode = 0;

        currentActivity.startActivityForResult(in, requestCode);
    }
}