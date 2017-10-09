import React, { Component } from 'react';
import { AppRegistry, Text,TouchableOpacity,StyleSheet, View } from 'react-native';
import PayTab from './PayTab';

export default class Bootstrap extends Component {

  constructor(props) {

    super(props);

    this.state = {
        result: false
    };

      this.paytab = this.paytab.bind(this)

  }

  render() {

      return (

          <View>

            <TouchableOpacity onPress={this.paytab}>
              <Text style={styles.welcome}>PayTab Integration</Text>
            </TouchableOpacity>

            {this.renderSDKResponse()}

          </View>
      );

  }

  componentWillMount() {

  }

  renderSDKResponse(){

    var rturn = [];

    if(this.state.result){

        for( var i in this.state.result){
            rturn.push(<Text key={i} style={styles.instructions}> {i} : {this.state.result[i]}</Text>);
        }

        console.log('Result is:',this.state.result);
    }

    return (
          <View>
            {rturn}
          </View>);

  }

  async paytab() {

       this.setState({
           result : await PayTab.createOrder()
       });

  }

}

// skip this line if using Create React Native App
AppRegistry.registerComponent('Bootstrap', () => Bootstrap);

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
