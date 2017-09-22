package com.mibrahim.paytab;

import com.facebook.react.ReactActivity;

import android.content.SharedPreferences;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.os.Bundle;
import android.util.DisplayMetrics;
import android.content.Intent;

import java.util.Locale;

import android.widget.Toast;

//import paytabs.project.PayTabActivity;

public class MainActivity extends ReactActivity {

    /**
     * Returns the name of the main component registered from JavaScript.
     * This is used to schedule rendering of the component.
     */
    @Override
    protected String getMainComponentName() {
        return "paytab";
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {

        super.onCreate(savedInstanceState);

//        String lang = "en";
//        Locale myLocale = new Locale(lang);
//        Resources res = getResources();
//        DisplayMetrics dm = res.getDisplayMetrics();
//        Configuration conf = res.getConfiguration();
//        conf.locale = myLocale;
//        res.updateConfiguration(conf, dm);
//        Intent in = new Intent(MainActivity.this, PayTabActivity.class);
//        in.putExtra("pt_merchant_email", "merchant@myapp.com"); //this a demo account fortesting the sdk
//        in.putExtra("pt_secret_key", "oIUhj8mssa9rTWRAqHg4P9ECOcfs35lsOgJ7p6ARgJjaFbK6S1aIbOlZ1As5GNxu4hCtnclEWEOCPzIIBSrMGMMImeN22kx6C9zZ");
//        in.putExtra("pt_transaction_title", "Mr. John Doe");
//        in.putExtra("pt_amount", "1");
//        in.putExtra("pt_currency_code", "USD"); //Use Standard 3 character ISO
//        in.putExtra("pt_shared_prefs_name", "myapp_shared");
//        in.putExtra("pt_customer_email", "test@example.com");
//        in.putExtra("pt_customer_phone_number", "0097300001");
//        in.putExtra("pt_order_id", "1234567");
//        in.putExtra("pt_product_name", "Samsung Galaxy S6");
//        in.putExtra("pt_timeout_in_seconds", "300"); //Optional
//
//        //Billing Address
//        in.putExtra("pt_address_billing", "Flat 1,Building 123, Road 2345");
//        in.putExtra("pt_city_billing", "Juffair");
//        in.putExtra("pt_state_billing", "Manama");
//        in.putExtra("pt_country_billing", "Bahrain");
//        in.putExtra("pt_postal_code_billing", "00973");
//
//        //Shipping Address
//        in.putExtra("pt_address_shipping", "Flat 1,Building 123, Road 2345");
//        in.putExtra("pt_city_shipping", "Juffair");
//        in.putExtra("pt_state_shipping", "Manama");
//        in.putExtra("pt_country_shipping", "Bahrain");
//        in.putExtra("pt_postal_code_shipping", "00973"); //Put Country Phone code if Postal code not available '00973'
//        int requestCode = 0;
//
//        startActivityForResult(in, requestCode);
    }

    @Override
    public void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
//        SharedPreferences shared_prefs = getSharedPreferences("myapp_shared", MODE_PRIVATE);
//        String pt_response_code = shared_prefs.getString("pt_response_code", "");
//        String pt_transaction_id = shared_prefs.getString("pt_transaction_id", "");
//        Toast.makeText(MainActivity.this, "PayTabs Response Code : " + pt_response_code,
//                Toast.LENGTH_LONG).show();
//        Toast.makeText(MainActivity.this, "Paytabs transaction ID after payment : " +
//                pt_transaction_id, Toast.LENGTH_LONG).show();
    }
}
