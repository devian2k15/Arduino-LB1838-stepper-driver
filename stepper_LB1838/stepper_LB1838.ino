#define ENA A0 //connect both ENA1 and ENA2 to the Arduino A0 pin
#define IN1 A1
#define IN2 A2

void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  digitalWrite(ENA, 0);
  digitalWrite(IN1, 0);
  digitalWrite(IN2, 0);
  delay(100);
  digitalWrite(ENA, 1); //wait 100ms for starting up the Arduino and charging the capacitors. 
}

void loop() {
  digitalWrite(IN1, 1); digitalWrite(IN2, 1); delay(1);
  digitalWrite(IN1, 0); digitalWrite(IN2, 1); delay(1);
  digitalWrite(IN1, 0); digitalWrite(IN2, 0); delay(1);
  digitalWrite(IN1, 1); digitalWrite(IN2, 0); delay(1);

}
