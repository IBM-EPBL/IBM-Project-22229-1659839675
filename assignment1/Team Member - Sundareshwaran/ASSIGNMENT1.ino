int Dc=5;
int Power=0;
int temp=A1;
int atemp;


void setup()
{
  pinMode(temp, INPUT);
  pinMode(Dc, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  atemp = analogRead(temp);
  double tcels = (double)atemp/1024*5;
  tcels = tcels - 0.5;
  tcels = tcels * 100;
  Serial.print("The temperature is ");
  Serial.print(tcels);
  Serial.print("& Fan is: ");
  
  if(tcels>35){
    Power=1000;
    Serial.println("On");
  }
  else{
    Power=0;
    Serial.println("Off");
  }
  
  analogWrite(Dc, Power);
}
