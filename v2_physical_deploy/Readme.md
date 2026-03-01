# 🔧 Version 2 — Physical Deployment (Hardware Implementation)

## 📌 Overview
This version focuses on transitioning the digital lock system from a simulation-based prototype (v1) to a physically deployable hardware setup using an **Arduino-based architecture**. 

The goal of this phase is to validate that the system operates reliably in a real-world environment and can be integrated with a physical locking mechanism.

---

## 🎯 Objective
To implement and verify the digital locking system on hardware, ensuring correct interaction between:
* **Input components** (Buttons)
* **Processing logic** (Arduino)
* **Output mechanisms** (Servo/LEDs)

---

## ⚙️ Key Features
* **Password Input:** Uses physical push buttons for manual entry.
* **Real-time Processing:** Immediate validation of user input.
* **Servo Mechanism:** Motor-based locking and unlocking movement.
* **LED Status Indicators:**
  * 🟢 **Green LED** → Access Granted
  * 🔴 **Red LED** → Access Denied
* **Auto-Lock:** Timed unlocking mechanism that resets after access.

---

## 🛠️ Hardware Components
| Component | Purpose |
| :--- | :--- |
| **Arduino Uno R3** | Main Microcontroller |
| **Push Buttons (3)** | User Input / Password Entry |
| **Servo Motor** | Physical Locking Actuator |
| **LEDs (Red/Green)** | Visual Feedback |
| **Resistors** | Circuit Protection |
| **Breadboard & Jumper Wires** | Prototyping Connectivity |

---

## 🔌 System Architecture
1. **Input Layer** → Push buttons for password entry.
2. **Processing Layer** → Arduino executes password validation logic.
3. **Output Layer** → Servo motor (lock control) + LEDs (status indication).

---

## 🧠 Engineering Focus
* **Hardware-Software Integration:** Ensuring code translates to physical movement.
* **Signal Handling:** Managing reliable signals from physical inputs (debouncing).
* **Actuator Control:** Precise servo motor timing and positioning.
* **System Stability:** Reliability during continuous operation.

---

## 📊 Outcome
Successful validation of the digital locking system in a hardware-oriented setup, establishing a foundation for implementing enhanced security features in future versions.

## 🚀 Next Phase: Version 3
* **Attempt Counter System:** Tracking failed entries.
* **Access Restriction:** Temporary lockout after multiple failures.
* **Enhanced Security:** Hardened logic for system control.

---

## 🏁 Strategic Roadmap
* **v1** → Simulation Logic
* **v2** → **Real-World Deployment (Current)**
* **v3** → Advanced Security System
