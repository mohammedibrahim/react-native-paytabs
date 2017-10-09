/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 * @flow
 */

import React, {Component} from 'react';
import {
    AppRegistry,
    StyleSheet,
    Text,
    TouchableOpacity,
    View
} from 'react-native';

import PayTab from './PayTab';

export default class paytab extends Component {

    render() {

        return (

            <View style={styles.container}>
                <Text style={styles.welcome}>
                    Welcome to React Native!
                </Text>
                <Text style={styles.instructions}>
                    To get started, edit index.android.js
                </Text>
                <Text style={styles.instructions}>
                    Double tap R on your keyboard to reload,{'\n'}
                    Shake or press menu button for dev menu
                </Text>

                <TouchableOpacity onPress={this.paytab}>
                    <Text style={styles.welcome}>PayTab Integration</Text>
                </TouchableOpacity>

            </View>
        );
    }

    async paytab() {

        var res = await PayTab.createOrder({
            'merchant_email': 'harede0@gmail.com',
            'secret_key' : 'kuCzGvELL6S6oJE1BFVvfsiLbGqePqGaUjJBPomAufHSZlUB1P7hip2t5tHVTo5OHPpwdM7H1OA1auCcjJtB9w5fZNaSbfGT45pi',
            'transaction_title' : 'Mr. John Doe',
            'amount' : '100',
            'currency_code' : 'EGP',
            'shared_prefs_name' : 'myapp_shared',
            'customer_email' : 'test@example.com',
            'customer_phone_number' : '0097300001',
            'order_id' : '1234567',
            'product_name' : 'Samsung Galaxy S6',
            // 'timeout_in_seconds' : '-1', //optionl

            //Billing Adress
            'address_billing' : 'Flat 1,Building 123, Road 2345',
            'city_billing' : 'Juffair',
            'state_billing' : 'Manama',
            'country_billing' : 'Bahrain',
            'postal_code_billing' : '00973',

            //Shipping Address
            'address_shipping' : 'Flat 1,Building 123, Road 2345',
            'city_shipping' : 'Juffair',
            'state_shipping' : 'Manama',
            'country_shipping' : 'Bahrain',
            'postal_code_shipping' : '00973',
            'locale' : 'en'
        });

    }
}

const styles = StyleSheet.create({
    container: {
        flex: 1,
        justifyContent: 'center',
        alignItems: 'center',
        backgroundColor: '#F5FCFF',
    },
    welcome: {
        fontSize: 20,
        textAlign: 'center',
        margin: 10,
    },
    instructions: {
        textAlign: 'center',
        color: '#333333',
        marginBottom: 5,
    }
});

AppRegistry.registerComponent('paytab', () => paytab);
