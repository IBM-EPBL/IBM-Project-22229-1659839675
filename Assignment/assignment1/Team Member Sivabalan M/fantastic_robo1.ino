float temp;
float vout;
float vout1;
int LED = 13;
int gasSensor ;
int piezo = 7;
void setup ( )
 {
pinMode(A0 , INPUT) ;
pinMode(A1 , INPUT) ;
pinMode(13 , OUTPUT) ;
pinMode(piezo , OUTPUT) ;
Serial.begin(9600 ) ;
}
void loop()
{
vout=analogRead (A1) ;
vout1=vout ;
temp=(vout1)/10;
gasSensor=analogRead(A0);
if(temp>=25)
{
digitalWrite(13, HIGH);
}
else
{
digitalWrite(13, LOW);
}
if(gasSensor>=100)
{
digitalWrite(piezo , HIGH);
}
else
{
digitalWrite(piezo , LOW );
}
Serial.print(" in Degree'C = " );
Serial.print(temp);
Serial.print(" ");
Serial.print("GaaSensor = ");
Serial.print(gasSensor);
Serial.println();
delay (1000);
} 