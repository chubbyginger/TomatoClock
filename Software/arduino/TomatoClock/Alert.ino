// The maximum elapsed time of this function is 20271 us (0.02 s).
int testUltrasonic() {
  // Trigger the module to transmit signal.
  digitalWrite(US_TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(US_TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(US_TRIG, LOW);
  // Count the pulse time and calculate the distance (in cm).
  int distance = pulseIn(US_ECHO, HIGH);
  distance = distance / 58;
  return distance;
}
