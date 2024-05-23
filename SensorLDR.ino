int Led1 = 8;
int Led2 = 9;
int Led3 = 10;
int LDR = A0;
int Val = 0;  

void setup()
{
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(Led1, HIGH);
  digitalWrite(Led2, HIGH);
  digitalWrite(Led3, HIGH);
 
  Val= analogRead(LDR);

  if(Val > 350)
  {
    digitalWrite(Led1, LOW);
  }
  if(Val > 450)
  {
    digitalWrite(Led2, LOW);
  }
  if(Val > 550)
  {
    digitalWrite(Led3, LOW);
  }
  delay(800);
}
