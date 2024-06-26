#include <Arduino.h>
#include <ESP32Servo.h>





class ServoController
{
private:



public:

  Servo control;
  int servo_pin;

  ServoController(int _servo_pin){
    
    servo_pin = _servo_pin;

  }

  void SetupServo() {

    // Allow allocation of all timers
    // ESP32PWM::allocateTimer(0);
    // ESP32PWM::allocateTimer(1);
    // ESP32PWM::allocateTimer(2);
    // ESP32PWM::allocateTimer(3);
    // control.setPeriodHertz(50);    // standard 50 hz servo
    control.attach(servo_pin);
    // ServoTest();
  
  }

  void ServoTest(){

    control.write(0);
    delay(1000);
    
    control.write(180);
    delay(1000);
    
    control.write(90);
    delay(1000);

    control.write(0);
    delay(1000);

  }

};





// int ReadDataFromSerial(){
  
//   int data = 0;
//   const int BUFFER_SIZE = 100;
//   char buf[BUFFER_SIZE];
  
//   if(Serial.available()){
//     data = Serial.readBytesUntil('\n', buf, BUFFER_SIZE);
//     Serial.print("Read:");
//     for(int i = 0; i < data; i++)
//       Serial.print(buf[i]);
//   }

//   return data;

// }



// void loop() {
//   int data = 0;

//   // data = ReadDataFromSerial();
//   // if(data > 0
//   // ) servo.write(data);
//   // delay(1000);
// }
