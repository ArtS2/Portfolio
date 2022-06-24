int led = 13;                                    
int sound = 8;                                

void setup()
{
   pinMode(led, OUTPUT);              
   pinMode(sound, OUTPUT);         
}

void loop()                                        
{
   digitalWrite(led, HIGH);                
   tone(sound, 1000, 250);              
   delay(2000);                                  
   digitalWrite(led, LOW);               
   tone(sound, 6000, 250);             
   delay(2000);                                 
}
