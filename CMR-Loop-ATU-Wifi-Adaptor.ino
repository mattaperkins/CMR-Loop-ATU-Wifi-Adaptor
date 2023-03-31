// Scketch to make a WiFi Dongle for the CMR Loop antenna cotnroler version 2.0 
// Matt Perkins VK2FLY - March 2023  
// 



#include <WiFi.h>
#include <NTPClient.h>
#include <PinButton.h>

#include "USB.h"
#include "USBHIDKeyboard.h"
USBHIDKeyboard Keyboard;


////////////////////////////////////////////////////////////////////////////////////////
// A button can be wired between ground and the following pin
// on pressing the buttont he antenna will retune. Pin can be set bellow 
PinButton retuneButton(5);

// Make changes here for your WIFI SSID and password settings
char ssid[] = "MYSSID";
char password[] = "MYPASSWORD";


// There should be no need to make changes bellow. 
/////////////////////////////////////////////////////////////////////////////////////////

WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP);



void setup() {

  // INIZ Wifi 
  String hostname = "LOOP Antenna"; 
  WiFi.setHostname(hostname.c_str()); 
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
  }

  // start the NTP client
  
  timeClient.begin();
  timeClient.update();
  
  //INIZ Keyboard interface 
  Keyboard.begin();
  //delay(3000);  
  
}

void loop() {
 
  timeClient.update(); 
  retuneButton.update(); 
  
 delay(5000);   

   Keyboard.write(KEY_RETURN);



  delay(30000); 

}
