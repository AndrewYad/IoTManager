#pragma once
#include <Arduino.h>

extern void loopCmdAdd(const String& cmdStr);
extern void fileCmdExecute(const String& filename);
extern void csvCmdExecute(String& cmdStr);
extern void spaceCmdExecute(String& cmdStr);
extern void loopCmdExecute();
extern void addKey(String& key, String& keyNumberTable, int number);
extern int getKeyNum(String& key, String& keyNumberTable);

extern void buttonIn();
extern void buttonInSet();



extern void bme280Temp();
extern void bme280ReadingTemp();
extern void bme280Hum();
extern void bme280ReadingHum();
extern void bme280Press();
extern void bme280ReadingPress();

extern void bmp280Temp();
extern void bmp280ReadingTemp();
extern void bmp280Press();
extern void bmp280ReadingPress();

//extern void modbus();
//extern void modbusReading();

extern void sysUptime();
extern void uptimeReading();


