# CAPACITIVE-RAIN-SENSOR

**Using a Capacitive Soil Moisture Sensor as a Rain Sensor**

This project demonstrates the use of a **capacitive soil moisture sensor** as a rain sensor, replacing the traditional resistive rain sensors which come with several disadvantages, such as susceptibility to corrosion and a shorter lifespan.

## Why Capacitive Sensors?

Capacitive soil moisture sensors provide more reliable and durable readings than resistive sensors. While resistive sensors tend to corrode and degrade over time, capacitive sensors offer stable and long-lasting performance, making them ideal for outdoor weather conditions.

## Sensor Output and Rain Detection

The sensor provides analog values which correspond to different moisture levels in the environment, allowing for rain detection at various levels of intensity.

### Value Mapping:

- **In Open Air (dry conditions):** Sensor values are **above 720**.
- **Minor Drizzle (~5 drops per 10 seconds):** Sensor values drop just below **701**.
- **Continuous Drizzle:** Sensor values fall below **690**.
- **Continuous Rain:** Sensor values drop to between **570 and 650**.
- **Immersed in Water:** Sensor values drop to around **530**.
- **Post-Rain (drying up):** Sensor values quickly rise back above **700**.

### Response Time

The sensor readings are very responsive, updating every **10 seconds**, ensuring real-time rain detection.

## Installation

1. Connect the capacitive soil moisture sensor to your microcontroller (such as an Arduino or ESP32) using the following pins:
   - **VCC** to **5V** (or 3.3V depending on your board)
   - **GND** to **Ground**
   - **Analog Signal** to an **analog input pin** (e.g., A0).

