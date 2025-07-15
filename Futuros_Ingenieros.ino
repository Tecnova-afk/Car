#include <Servo.h> 
Servo servo; // servo object representing the MG 996R servo
int d = 2; 
int IN3 = 5; //conectadas las ruedas
int IN4 = 4;

void setup() {
  servo.attach(3); // servo  pin 3
  pinMode (IN4, OUTPUT);    // Input4 conectada al pin 4 
  pinMode (IN3, OUTPUT);    // Input3 conectada al pin 5
  pinMode(2,INPUT); // boton
  pinMode(13,OUTPUT); // Led
}

void loop() {
  servo.write(15); // Servo en el Centro  
  d=digitalRead(2);//se presiona el boton
 
  while(d==0){
  digitalWrite(13, HIGH); // Enciende el LED  
  // PRIMERA VUELTA 
  digitalWrite (IN4, HIGH); // Adelante 1
  delay(1600);
  servo.write(30); // Derecha 2
  delay(5000);
  servo.write(15); // Adelante 3
  delay(800);
   servo.write(30); // Derecha 4
  delay(4500);
  servo.write(15); // Adelante 5
  delay(200);
  servo.write(30); // Derecha 6 
  delay(1500);
 }//while 
  digitalWrite(13, LOW);
 }//loop

  
