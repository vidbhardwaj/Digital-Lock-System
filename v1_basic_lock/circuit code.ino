#include <Servo.h>
Servo lockServo;
// setting pin
const int buttonPins[3] = {2, 3, 4};
const int greenLED = 8;
const int redLED = 9;
const int servoPin = 10;
// setting password
const int passwordLength = 3;
const int password[passwordLength] = {1, 2, 3};
int userInput[passwordLength];
int inputIndex = 0;
void setup() 
{
  // setting servo
  lockServo.attach(servoPin);
  lockServo.write(0); 
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  for (int i = 0; i < 3; i++) 
  {
    pinMode(buttonPins[i], INPUT_PULLUP);
  }
}
void loop() 
{
  for (int i = 0; i < 3; i++) 
  {
    if (digitalRead(buttonPins[i]) == LOW) 
    {
      userInput[inputIndex] = i + 1;
      inputIndex++;
      delay(300); 
      if (inputIndex == passwordLength) 
      {
        validatePassword();
        inputIndex = 0;
      }
    }
  }
}
void validatePassword() 
{
  bool accessGranted = true;
  for (int i = 0; i < passwordLength; i++) 
  {
    if (userInput[i] != password[i]) 
    {
      accessGranted = false;
      break;
    }
  }
  if (accessGranted) 
  {
    digitalWrite(greenLED, HIGH);
    lockServo.write(90); 
    delay(2000);
    lockServo.write(0);  
    digitalWrite(greenLED, LOW);
  } 
  else 
  {
    digitalWrite(redLED, HIGH);
    delay(2000);
    digitalWrite(redLED, LOW);
  }
}
