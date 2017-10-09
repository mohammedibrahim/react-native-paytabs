/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 * @flow
 */

import React, { Component } from 'react';
import {
  AppRegistry,
  StyleSheet,
  Text,
  TouchableOpacity,
  View
} from 'react-native';

import { NativeModules } from 'react-native';
var PayTab = NativeModules.PayTab;

export default class paytab extends Component {
  render() {

    return (
      <View style={styles.container}>
        <Text style={styles.welcome}>
          Welcomeee to React Native!
        </Text>
        <Text style={styles.instructions}>
          To get started, edit index.ios.js
        </Text>
        <Text style={styles.instructions}>
          Press Cmd+R to reload,{'\n'}
          Cmd+D or shake for dev menu
        </Text>

        <TouchableOpacity onPress={this.paytab}>
              <Text style={styles.welcome}>PayTab Integration</Text>
        </TouchableOpacity>

      </View>
    );
  }

  async paytab() {
        var res = await PayTab.createOrder({'a':'b'});
        console.log(res);

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
  },
});

AppRegistry.registerComponent('paytab', () => paytab);
