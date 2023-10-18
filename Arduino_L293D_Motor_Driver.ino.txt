// Define the pin numbers
int motorPin1 = D8;
int motorPin2 = D9;
void setup() {
  // Set the pin modes of the above IO pins to OUTPUT
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
}

void loop()
{
  clockwise();//motor rotate in forward direction
  delay(5000);
  brake();
  delay(2000);
  anticlockwise();// motor rotate in backward direction
  delay(5000);
  brake();
  delay(2000);
}

void clockwise()   //motor rotate in forward direction
{

  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
}
void anticlockwise()  // motor rotate in backward direction
{
  digitalWrite(motorPin1, LOW );
  digitalWrite(motorPin2, HIGH);
}
void brake()       // No rotation OR delay
{
  digitalWrite(motorPin1, LOW );
  digitalWrite(motorPin2, LOW);
}
