// C++ code
//

int pont = A1;
int led1 = 9; 
int switch1 = 4; 

void setup() {
  pinMode(pont, INPUT); 
  pinMode(switch1, INPUT);
  pinMode(led1, OUTPUT); 
  Serial.begin(9600);
}

void loop() {
  int calc = analogRead(pont);
  int switch2 = digitalRead(switch1);
  Serial.println(calc);
  int final = map(calc, 0, 1023, 0, 255);
  Serial.print("final : ");
  Serial.println(final);

  if (switch2 == HIGH) { 
    analogWrite(led1, final);
  } else {
    analogWrite(led1, 0); 
  }
}
	