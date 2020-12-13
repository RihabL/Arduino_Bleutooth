
led=6;
void setup() {
Serial.begin(9600);
pinMode(led, OUTPUT);

 }

void loop() {
 
 if(Serial.available()>0)
   {     
      char data= Serial.read(); // reading the data received from the bluetooth module
      switch(data)
      {
        case 'a': digitalWrite(led, HIGH);break; // when a is pressed on the app on your smart phone
        case 'd': digitalWrite(led, LOW);break; // when d is pressed on the app on your smart phone
        default : break;
      }
      Serial.println(data);
   }
   delay(500);
}
