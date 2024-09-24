# CAPACITIVE-RAIN-SENSOR

**Using a Capacitive Soil Moisture Sensor as a Rain Sensor**

This project demonstrates the use of a **capacitive soil moisture sensor** as a rain sensor, replacing the traditional resistive rain sensors which come with several disadvantages, such as susceptibility to corrosion and a shorter lifespan.

## Why Capacitive Sensors?

Capacitive soil moisture sensors provide more reliable and durable readings than resistive sensors. While resistive sensors tend to corrode and degrade over time, capacitive sensors offer stable and long-lasting performance, making them ideal for outdoor weather conditions.

## Sensor Output and Rain Detection

The sensor provides analog values which correspond to different moisture levels in the environment, allowing for rain detection at various levels of intensity.

## Value Mapping

| Sensor Value Range | Condition                              |
|--------------------|----------------------------------------|
| > 720              | Open air, no moisture                  |
| 701 - 720          | Very minor drizzle (~5 drops per 10 sec)|
| 690 - 701          | Continuous drizzle                     |
| 570 - 650          | Continuous rain                        |
| 530 - 570          | Immersed in water                      |
| > 700 (after rain) | Post-rain, drying up                   |

### Response Time

The sensor readings are very responsive, updating every **10 seconds**, ensuring real-time rain detection.

## Installation

1. Connect the capacitive soil moisture sensor to your microcontroller (such as an Arduino or ESP32) using the following pins:
   - **VCC** to **5V** (or 3.3V depending on your board)
   - **GND** to **Ground**
   - **Analog Signal** to an **analog input pin** (e.g., A0).

