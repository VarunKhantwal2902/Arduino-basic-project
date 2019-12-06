#include <Servo.h>
Servo servo;
int buttonPin=2;
bool buttonState=false;
void setup() {
  //Servo declaration
  servo.attach(8);
  servo.write(0);

  Serial.begin(9600);

  //Button pin
  pinMode(buttonPin,INPUT);
  pinMode(13,OUTPUT);
delay(1000);

}

void loop() {


static int device=2;

buttonState=digitalRead(buttonPin);
//button input and what to do then
if (buttonState){
  device +=1;
  Serial.println("button was pressed...");
  }
else {
  Serial.println("button was not pressed...");
  }
// what to be done for whatever values of device
int s= deviceState(device);
if (device%3==0)//Case 1, operating a servo
{
  
  Serial.println("Go for it");
  while (Serial.available()==0){ // While the serial is empty do nothin
    }
  int a =Serial.parseInt();
  servo.write(a);
  Serial.println("Hold up");
  delay(1000);
  int dummy = Serial.read();

  }
  else if ( device%3==1)//Case 2, servo back and forth{
   {
  int i=0;
  servo.write(0);
  for ( i;i<=180;i++);
  {
  servo.write(i);
  delay(10);
    }
   for (i;i>=0;i--){
    servo.write(i);
    delay(10);
   }
  }
  else if (device%3==2){//Just light up an led{
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
    }
    Serial.println("hold the button if you want to in 2 seconds");
    delay(2500);
    
    
}
int deviceState(int device){
  Serial.print("Current value of device is -");
  Serial.println(device);
  if(device%3==0){
    Serial.println("enter angle (in degrees) from 0 to 180 for servo");
    }
  else if (device%3==1){
    Serial.println("Servo gunna go back and forth once");
    }
   else if (device%3==2){
    Serial.println("Gunna light the led");
    }
   
  }
