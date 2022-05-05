int data;
int light = 13;

void setup()
{
 pinMode(light, OUTPUT);

Serial.begin(9600); 
}

void loop()
{
 if(Serial.available())
{
 //read the data
   int data = Serial.read();
   delay(100);
   if(data=='1')
   {
      digitalWrite(light, 1); 
   }
   if(data=='1')
   {
      digitalWrite(light, 0); 
   }
   
   delay(100);
} 
}
