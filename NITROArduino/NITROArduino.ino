
int Pin1 = 0; //blue
int Pin2 = 1; //green
int Pin3 = 2; //brown
int Pin4 = 3; //gray
int Pin5 = 4; //white
int Pin6 = 5; //yellow

void setup()
{
  Serial.begin(9600);   
                       
}
 
void loop()                     
{
 float analog1 = getVoltage(Pin1);  

 float analog2 = getVoltage(Pin2);
 
 float analog3 = getVoltage(Pin3);
 
 float analog4 = getVoltage(Pin4);

 float analog5 = getVoltage(Pin5);

 float analog6 = getVoltage(Pin6);
 
 Serial.print("analog1: ");                      
 Serial.println(analog1);                      
 delay(1);                                     //waiting a second
 Serial.print("analog2: ");                      
 Serial.println(analog2);                      
 delay(1);                                     //waiting a second
 Serial.print("analog3: ");                      
 Serial.println(analog3);                      
 delay(1);                                     //waiting a second
 Serial.print("analog4: ");                      
 Serial.println(analog4);                      
 delay(1);                                     //waiting a second
 Serial.print("analog5: ");                      
 Serial.println(analog5);                      
 delay(1);                                     //waiting a second
 Serial.print("analog6: ");                      
 Serial.println(analog6);                      
 delay(1);                                     //waiting a second
}

float getVoltage(int pin){

  return (analogRead(pin)); 
                                   
}
