
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
    },
    colors: {
      primaryShade1: { lightHex: "#FF9800" }, //input line, clickable text, primary button
      primaryShade2: { lightHex: "#B16B04" }, //Primary button hover
      secondaryShade1: { lightHex: "#3E3E3E" }, //Secondary button hover
      secondaryShade2: { lightHex: "#B7B7B8" }, //Primary button disabled
      secondaryShade3: { lightHex: "#232323" }, //Secondary button border
      textPrimaryShade1: { lightHex: "#3D4045" }, //Common text
      textPrimaryShade2: { lightHex: "#55575A" }, //Placeholders
      textPrimaryShade3: { lightHex: "#47494A" }, //List items, value texts
      textPrimaryShade4: { lightHex: "#000000" }, //Titles, secondary button text color
      textPrimaryShade5: { lightHex: "#000000" }, //Primary button text color
      backgroundColorPrimary: { lightHex: "#F3F0EF" }, //Window color
      backgroundColorSecondary: { lightHex: "#FFFFFF" }, //Toolbar, cards and bottomsheet
      backgroundColorTertiary: { lightHex: "#FFF3E0" }, //Search bar background
      success: { lightHex: "#19AA81" }, //Success messages, success validations, success field values
      error: { lightHex: "#D53F3F" }, //Error messages, error lines, error fields
      controlShade1: { lightHex: "#898A8C" }, //Disabled inputs
      controlShade2: { lightHex: "#DDDDDD" }, //Enabled inputs, search icon color
      controlAccessoryShade1: { lightHex: "#9CA3AF" }, //Clear input button icon color
      controlAccessoryShade2: { lightHex: "#1F2937" } //Close button icon color
    }
  }

  useEffect(() => {
    eventEmitter.addListener("READYREMIT_AUTH_TOKEN_REQUESTED", () => {
      // TODO: Fetch an auth token from your server
      ReadyRemitModule.setAuthToken("eyJhbGciOiJSUzI1NiIsInR5cCI6IkpXVCIsImtpZCI6ImlyUmg0cHJQSGxfdm5KSm15dVdrcyJ9.eyJodHRwczovL2FwaS5yZWFkeXJlbWl0LmNvbS9zZW5kZXJfaWQiOiJmMjY2ZDAzNi02OTVjLTQ2ODYtOTU4Yi01MTBjOGU1MGY4ZjAiLCJpc3MiOiJodHRwczovL3JlYWR5cmVtaXQudXMuYXV0aDAuY29tLyIsInN1YiI6InltWnlHc0xtQ21oejdHTVNRUTVPS1VWeFlydHVIZm90QGNsaWVudHMiLCJhdWQiOiJodHRwczovL3NhbmRib3gtYXBpLnJlYWR5cmVtaXQuY29tIiwiaWF0IjoxNjY5NzM1MDMwLCJleHAiOjE2Njk4MjE0MzAsImF6cCI6InltWnlHc0xtQ21oejdHTVNRUTVPS1VWeFlydHVIZm90IiwiZ3R5IjoiY2xpZW50LWNyZWRlbnRpYWxzIn0.bKaxz9Xj3MxulfrHeFj74nedYDQ0gt2_GH3CcWRBSeskpBssOclw_MdQsthxK1Mg2zshqdAu-OK6UyICCXXVDSvrcugoM8ycYFnnP1VAGOwexIyGRNs08uQgif4Tp6k8EqUJ9tN2pbqUKOVF_uAKqg4Rn1XYB9anNnBCFMrlvDCY-z3OUri_yGi3jU8t2SneBjHi4VVgrCrEo9K8XKmG9Wrch2fFJxfl4IxafYkZhTWTp5XPf4B4SWW7ts6OH-_U-9NT-BzRQpjhTwHltcK8g95cYud9CNlRxeQMkJvvEiDKr9hYJTDoldAVTdGMfCcgisGLu90jEKHUQQHKIdqUhg", null);
    })
  
    return function cleanup () {
      eventEmitter.removeAllListeners("READYREMIT_AUTH_TOKEN_REQUESTED");
    }
  }, []);

  useEffect(() => {
    eventEmitter.addListener("SDK_CLOSED", () => {
      console.log("SDK CLOSED");
    })
  
    return function cleanup () {
      eventEmitter.removeAllListeners("SDK_CLOSED");
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