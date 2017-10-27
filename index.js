/**
 * React Native Integration with PayTabs Payment Gateawy
 */

'use strict';

import React, {Component} from 'react'
import {NativeModules, Platform} from 'react-native'

const { PayTabs: PayTabsNativeSDK } = NativeModules

class PayTabs {

    constructor() {

        this.verifyPayment = this.verifyPayment.bind(this);
        this.createOrder = this.createOrder.bind(this);
        this.isSimulator = this.isSimulator.bind(this);
    }

    /**
     * Verify Payment
     *
     * @param transactionDetails
     * @param callback
     */
     verifyPayment(transactionDetails, callback){

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

    /**
     * Create Order
     *
     * @param data
     * @returns {Promise.<*>}
     */
    async createOrder(data){

        return await PayTabsNativeSDK.createOrder(data);
    }

    /**
     * Current Device is IOS simulator or not.
     *
     * @returns {Promise.<*>}
     */
    async isSimulator(){

        return Platform.OS === 'ios' ? await PayTabsNativeSDK.isSimulator() : 'No';
    }

};

module.exports = new PayTabs() ;
