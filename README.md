## ESP32-MINI-32-V1.3
ESP32-Arduino-demo
![](https://github.com/LilyGO/ESP32-MINI-32-V2.0/blob/master/ZZ_Images/image1.jpg)

## [Module_test](https://github.com/LilyGO/ESP32-MINI-32-V2.0/blob/master/Module_test/Blink/Blink.ino)

### Unit 1 [Blink](https://github.com/LilyGO/ESP32-MINI-32-V2.0/blob/master/Module_test/Blink/Blink.ino)

LED can change Blink frequency by changing delay time

```C
digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
delay(1000);                       // wait for a second
Serial.println("blink on");
digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
delay(1000);                       // wait for a second
```

Flash every second

---

### Unit 2 [Bluetooth](https://github.com/LilyGO/ESP32-MINI-32-V2.0/blob/master/Module_test/Bluetooth_test/Bluetooth_test.ino)

Phone pairing to connect to Bluetooth

```c
void setup() {
  Serial.begin(115200);
  SerialBT.begin("ESP32test"); //Bluetooth device name
  Serial.println("The device started, now you can pair it with bluetooth!");
  Serial.println("My name is ESP32test");
}
```
ESP32 Bluetooth name is set by SerialBT.begin()

---

### Uint 3 [wifi](https://github.com/LilyGO/ESP32-MINI-32-V2.0/tree/master/Module_test/Wifi_test_demo)

#### wifi_scan
Wifi scan serial port information display can connect wifi name and signal strength

```c
 Serial.begin(115200);

    // Set WiFi to station mode and disconnect from an AP if it was previously connected
    WiFi.mode(WIFI_STA);
    WiFi.disconnect();
    delay(100);

    Serial.println("Setup done")
```

#### wifi_web_sever

By connecting to WiFi, you can generate a web page.

```c
const char* ssid = "TP-LINK-";//Please input your wifi ID
const char* password = "123456";//Please input your wifi password

//Log in with a browser to generate a mac address:
//example:192.168.0.108
digitalWrite(led, 1);
server.send(200, "text/plain", "hello from esp32!");
digitalWrite(led, 0);
```
Log in to 192.168.0.x,The screen will display:"hello from esp32!"

---
