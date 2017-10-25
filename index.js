/**
 * BootStraping
 */

'use strict';

import React, {Component} from 'react'
import { NativeModules} from 'react-native'

const { PayTabs } = NativeModules;

function PayTabsVerifyPayment(transactionDetails, callback){

    const PAYTAB_URL = 'https://www.paytabs.com/apiv2';

    var paytabPayload = {
        merchant_email: transactionDetails.merchant_email,
        secret_key: transactionDetails.secret_key,
        transaction_id: transactionDetails.payment_reference
    };

    var formData = new FormData();

    for (var k in paytabPayload) {
        formData.append(k, paytabPayload[k]);
    }

    const fetchOptions = {
        method: 'POST',
        headers: {
            'Accept': 'application/json',
            'Content-Type': 'multipart/form-data; charset=UTF-8'
        },
        body: formData
    };

    fetch(PAYTAB_URL + '/verify_payment_transaction', fetchOptions)
        .then((response) => response.json())
        .then((json) => {
            callback(json);
        })
        .catch((error) => {
            callback({response_code:0});
        })
};

module.exports = {PayTabs, PayTabsVerifyPayment};