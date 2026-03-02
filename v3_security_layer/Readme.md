# 🔐 Digital Lock System – v3_security_layer

## 📌 Overview  
This version enhances the digital locking system by introducing a **security layer** that controls unauthorized access attempts.

The system monitors incorrect password entries and restricts access after multiple failed attempts, improving overall system reliability and protection.

---

## 🎯 Objective  
To implement controlled access by limiting repeated incorrect attempts and preventing brute-force entry into the system.

---

## ⚙️ Key Features  
- Password-based authentication using keypad  
- Attempt counter (maximum 3 attempts)  
- Automatic system lockout after repeated failures  
- Visual feedback:
  - Green LED → Access Granted  
  - Red LED → Access Denied  
- Audible alert using buzzer during incorrect attempts and lockout  

---

## 🛠️ Components Used  
- Arduino Uno  
- 4x4 Keypad  
- Green LED  
- Red LED  
- Piezo Buzzer  
- Resistors  
- Breadboard and jumper wires  

---

## 🔌 System Architecture  
- **Input Layer** → Keypad for password entry  
- **Processing Layer** → Arduino handles authentication and attempt tracking  
- **Output Layer** → LEDs and buzzer for system feedback  

---

## 🧠 Engineering Focus  
- Implementation of attempt-based security logic  
- Prevention of brute-force access  
- State control (normal operation vs lockout state)  
- Real-time system response  

---

## 🔒 Security Logic  
- Correct password → Access granted + reset attempts  
- Incorrect password → Attempt counter incremented  
- After 3 failed attempts → System enters lockout mode (10 seconds)  

---

## 📊 Outcome  
The system now behaves as a **controlled access system**, significantly improving security compared to previous versions.

---

## 🚀 Next Phase  
Version 4 will introduce:
- LCD display for user interaction  
- Enhanced alert system  
- Improved user experience  
