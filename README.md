
Software to turn a ESP32 S3 or S2 into a wifi dongel for the CIRO MAZZONI loop antenna
By Matt Perkins VK2FLY 

Tested to work with ATU 2 but should also work with the older ones. 

Quick start  
Flash your ESP32 with the following Arduino Sketch you will need to edit the first few 
lines to reflect your local wifi settings. Once flashed Connect your ESP board directly
to the keyboard port on your ATU and connect via a web browser to the ESP32's IP

You may need to check your DHCP server for the IP address of your ESP32/Tuner 

You can then enter in a frequency you want the tuner to switch to or alternatively just 
tap enter to have the tuner re tune on the current frequency. 

The http get protocol was used so that it should be straightforward to automate frequency 
changes by some other means scripting with curl for example. 

Enjoy. 
Matt
VK2FLY


