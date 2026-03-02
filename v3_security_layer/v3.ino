#include <Keypad.h>

// ---------------- KEYPAD SETUP ----------------
const byte rows = 4;
const byte cols = 4;
char keys[rows][cols] = 
{
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[rows] = {9,8,7,6};
byte colPins[cols] = {5,4,3,2};
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, rows, cols);
// ---------------- LOCK SYSTEM ----------------
String correctPassword = "1234";
String enteredPassword = "";
int attempts = 0;
int maxAttempts = 3;
// ---------------- OUTPUT PINS ----------------
int greenLED = 10;
int redLED = 11;
int buzzer = 12;
// ---------------- SETUP ----------------
void setup() 
{
  Serial.begin(9600);
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(buzzer, OUTPUT);
}
// ---------------- LOOP ----------------
void loop() 
{
  char key = keypad.getKey();
  if (key) 
  {
    Serial.print("Pressed: ");
    Serial.println(key);
    // press # to check password
    if (key == '#') 
    {
      checkPassword();
    }
    // press * to clear
    else if (key == '*') 
    {
      enteredPassword = "";
      Serial.println("Cleared");
    }
    else 
    {
      enteredPassword += key;
    }
  }
}
// ---------------- PASSWORD CHECK ----------------
void checkPassword() 
{
  if (enteredPassword == correctPassword) 
  {
    Serial.println("Access Granted");
    digitalWrite(greenLED, HIGH);
    delay(2000);
    digitalWrite(greenLED, LOW);
    attempts = 0; // reset attempts
  }
  else 
  {
    Serial.println("Wrong Password");
    digitalWrite(redLED, HIGH);
    tone(buzzer, 1000);
    delay(1000);
    digitalWrite(redLED, LOW);
    noTone(buzzer);
    attempts++;
    if (attempts >= maxAttempts) 
    {
      lockout();
    }
  }
  enteredPassword = ""; // reset input
}
// ---------------- LOCKOUT ----------------
void lockout() 
{
  Serial.println("SYSTEM LOCKED for 10 seconds!");
  for (int i = 0; i < 10; i++) 
  {
    digitalWrite(redLED, HIGH);
    tone(buzzer, 500);
    delay(500);
    digitalWrite(redLED, LOW);
    noTone(buzzer);
    delay(500);
  }
  attempts = 0;
}