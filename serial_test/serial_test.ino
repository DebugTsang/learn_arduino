const byte LED = 13;
char val;

void setup()
{
  pinMode(LED, OUTPUT);
  
  Serial.begin(9600);
  Serial.println("Welcome to Arduino!");
}

void loop()
{
  if (Serial.available())
  {
    val = Serial.read();
    
    if ( val == '1')
    {
      
      digitalWrite(LED, HIGH);
      
      Serial.println("LED ON");
      
    }
    else if (val == '0')
    {
      digitalWrite(LED, LOW);
      
      Serial.println("LED OFF");
      
    }
  }
}
