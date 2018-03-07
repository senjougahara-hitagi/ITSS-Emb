#define lightPin A0
#define potenPin A1
int ledPin = 9;
  
void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int valLight = analogRead(lightPin);
  int valPoten = analogRead(potenPin);
  
  valLight = map(valLight, 1, 310, 0, 1023);
  
  Serial.print("Light:  ");
  Serial.println(valLight);
  Serial.print("Poten:  ");
  Serial.println(valPoten);
  Serial.println();
  
  if(valLight <= valPoten){
    digitalWrite(ledPin, HIGH);
  }else  {
    digitalWrite(ledPin, LOW);
  }
}