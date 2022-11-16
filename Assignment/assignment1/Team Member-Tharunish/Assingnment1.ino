long dd, cm, inches;
 
void setup() {
  Serial.begin (9600);
  pinMode(9,OUTPUT);
}
 
void loop()
{
 
  pinMode(11, OUTPUT);
  digitalWrite(11, LOW);
  delayMicroseconds(5);
  digitalWrite(11, HIGH);
  delayMicroseconds(10);
  digitalWrite(11, LOW);
 
  pinMode(11, INPUT);
  dd = pulseIn(11, HIGH);
  Serial.println(dd);

  cm = (dd/2) / 29.1;
  inches = (dd/2) / 74;
 
  if(inches > 57){
    digitalWrite(9, HIGH);
  }else if(inches < 4)
    digitalWrite(9, LOW);
 
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
 
  delay(250);
}