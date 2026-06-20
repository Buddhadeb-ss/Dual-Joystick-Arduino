#include <Arduino.h>

void setup() {
  Serial.begin(115200);
}

void loop() {
  // Define your pins exactly as you said:
  // Left Stick: A2, A3
  // Right Stick: A4, A5
  
  uint16_t channels[6];
  
  // Map 0-1023 (Analog) to 1000-2000 (Drone Standard)
  channels[0] = map(analogRead(A5), 0, 1023, 1000, 2000); // Roll
  channels[1] = map(analogRead(A4), 0, 1023, 1000, 2000); // Pitch
  channels[2] = map(analogRead(A2), 0, 1023, 1000, 2000); // Throttle
  channels[3] = map(analogRead(A3), 0, 1023, 1000, 2000); // Yaw
  channels[4] = 1500; // Aux 1
  channels[5] = 1500; // Aux 2

  // Build the IBUS Packet (Advanced Drone Language)
  byte buffer[32];
  buffer[0] = 0x20; // Packet length
  buffer[1] = 0x40; // Command type

  for (int i = 0; i < 6; i++) {
    buffer[2 + 2 * i] = channels[i] & 0xFF;
    buffer[2 + 2 * i + 1] = (channels[i] >> 8) & 0xFF;
  }
  
  // Fill the rest with defaults
  for (int i = 6; i < 14; i++) {
    buffer[2 + 2 * i] = 0xDC; 
    buffer[2 + 2 * i + 1] = 0x05; 
  }

  // Calculate Checksum (Required for stability)
  uint16_t checksum = 0xFFFF;
  for (int i = 0; i < 30; i++) {
    checksum -= buffer[i];
  }
  buffer[30] = checksum & 0xFF;
  buffer[31] = (checksum >> 8) & 0xFF;

  Serial.write(buffer, 32);
  delay(4); // Faster refresh rate for smooth flying
}
