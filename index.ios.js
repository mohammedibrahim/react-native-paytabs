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
  View
} from 'react-native';

import { NativeModules } from 'react-native';
// var HelloManager = NativeModules.HelloManager;

export default class paytab extends Component {
  render() {

    const callback = (error, events) => {
      if (error) {
        console.error(error);
      } else {
        console.log(events);
        alert(events);
      }
    };

    // const txt = HelloManager.addEvent('Birthday Party', '4 Privet Drive, Surrey', callback);

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
        <Text style={styles.instructions}> 
        Hello, {txt}
        </Text>
      </View>
    );
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
