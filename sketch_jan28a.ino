#define newLED 2 //green Led
#define okLED 4  //yellow LED
#define oldLED 6 //red LED

int analogValue = 0;
float voltage = 0;
int ledDelay = 2000;

//Project 6 -Testing a single-cell battery
void setup() 
{
pinMode(newLED, OUTPUT);
pinMode(okLED, OUTPUT);
pinMode(oldLED, OUTPUT);
}

void loop() 
{
  analogValue = analogRead(0);
  voltage = 0.0048*analogValue;
  if ( voltage >= 1.5 )
  {
    digitalWrite(newLED, HIGH);
    delay(ledDelay);
    digitalWrite(newLED, LOW);
  }
  else if ( (voltage < 1.5) && (voltage) > 1.1)
  {
    digitalWrite(okLED, HIGH);
    delay(ledDelay);
    digitalWrite(okLED, LOW);
  }
  else if ( voltage <= 1.1 )
  {
    digitalWrite(oldLED, HIGH);
    delay(ledDelay);
    digitalWrite(oldLED, LOW);
  }
}
