
import React, { useEffect } from 'react';
import { Button, SafeAreaView } from 'react-native';
import { NativeModules, NativeEventEmitter } from 'react-native'

const App = () => {
  const { ReadyRemitModule } = NativeModules;
  const eventEmitter = new NativeEventEmitter(ReadyRemitModule);
  const readyRemitEnvironment = 'SANDBOX'; // Options are 'SANDBOX' or 'PRODUCTION'
  const readyRemitLanguage = 'en'; // Options are 'en' or 'es_mx'

  const styles = {
    fonts: {
      default: { family: 'luminari' }
    }
  }

  useEffect(() => {
    eventEmitter.addListener("READYREMIT_AUTH_TOKEN_REQUESTED", () => {
      // TODO: Fetch an auth token from your server
      ReadyRemitModule.setAuthToken("", null);
    })
  
    return function cleanup () {
      eventEmitter.removeAllListeners("READYREMIT_AUTH_TOKEN_REQUESTED");
    }
  }, []);

  useEffect(() => {
    eventEmitter.addListener("READYREMIT_TRANSFER_SUBMITTED", (request) => {
      // TODO: Fetch a transferId from your server
      ReadyRemitModule.setTransferId("", "", "");
    })
  
    return function cleanup () {
      eventEmitter.removeAllListeners("READYREMIT_TRANSFER_SUBMITTED");
    }
  }, []);

  return (
    <SafeAreaView>
      <Button title='Start SDK' onPress={() => ReadyRemitModule.launch(readyRemitEnvironment, readyRemitLanguage, styles)}>Start SDK</Button> 
    </SafeAreaView>
  );
};

export default App;