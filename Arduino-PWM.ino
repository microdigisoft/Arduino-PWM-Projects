//LED brightness control with PWM Signal
int LED = 12; // Connect pin 12 to RED LED to control LED using PWM signal
int Signal = A0; // Connect 1K POT to analog input A0
int time1 = 0;
int time2 = 0;
void setup()  // setup loop
{
  pinMode(LED, OUTPUT); // declares pin 12 as output
  pinMode(Signal, INPUT);  // declares pin A0 as input
}
void loop()
{
  time2 = analogRead(pot); // reads the voltage at A0 and saves in timer 2
  time1 = 1000 - time2;
  digitalWrite(LED, HIGH); // sets pin 12 HIGH
  delayMicroseconds(time1);   // waits for time1 uS (high time)
  digitalWrite(LED, LOW);  // sets pin 12 LOW
  delayMicroseconds(time2);   // waits for time2 uS (low time)
}
