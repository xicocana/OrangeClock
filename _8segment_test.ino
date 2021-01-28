#include <DS3231.h>

/*
    A
   ---
F |   | B
  | G |
   ---
E |   | C
  |   |
   ---
    D
 */
//#include <DS3231.h>
 


// Init the DS3231 using the hardware interface
DS3231  rtc(A5, A4);

int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinD = 5;
int pinE = 6;
int pinF = 7;
int pinG = 8;
int D1 = 9;
int D2 = 10;
int D3 = 11;
int D4 = 12;

// the setup routine runs once when you press reset:
void setup() {  
  rtc.begin();
  Serial.begin(115200);
  
  // The following lines can be uncommented to set the date and time
  //rtc.setDOW(THURSDAY);     // Set Day-of-Week to SUNDAY
  //rtc.setTime(17, 3, 0);     // Set the time to 12:00:00 (24hr format)
  //rtc.setDate(28, 1, 2021);   // Set the date to January 1st, 2014
  Serial.begin(9600);             
  // initialize the digital pins as outputs.
  pinMode(pinA, OUTPUT);     
  pinMode(pinB, OUTPUT);     
  pinMode(pinC, OUTPUT);     
  pinMode(pinD, OUTPUT);     
  pinMode(pinE, OUTPUT);     
  pinMode(pinF, OUTPUT);     
  pinMode(pinG, OUTPUT);   
  pinMode(D1, OUTPUT);  
  pinMode(D2, OUTPUT);  
  pinMode(D3, OUTPUT);  
  pinMode(D4, OUTPUT);  
}

// the loop routine runs over and over again forever:
void loop() {
  //printValues(9, 9, 9, 9);
  Serial.println(rtc.getTimeStr());

  String hora = String(rtc.getTimeStr()).substring(0,2);
  String minu = String(rtc.getTimeStr()).substring(3,5);

  Serial.println(minu);

  if(hora.toInt() >= 10){
    if(minu.toInt() >= 10){
      printValues(hora[0]-'0', hora[1]-'0', minu[0]-'0', minu[1]-'0');
    }
    else{
      printValues(hora[0]-'0', hora[1]-'0', -1, minu.toInt());
    }
  }
  else{  
    if(minu.toInt() >= 10){
      printValues(hora.toInt(), -1, minu[0]-'0', minu[1]-'0');
    }
    else{
      printValues(hora.toInt(), -1, minu.toInt(), -1);
    }
  }

}

void printValues(int a, int b, int c, int d){
  //A
  if(a==-1){
    digitalWrite(D1, HIGH);
    digitalWrite(D2, HIGH);
    digitalWrite(D3, HIGH);
    digitalWrite(D4, HIGH);
  }else{
    digitalWrite(D1, LOW);
    digitalWrite(D2, HIGH);
    digitalWrite(D3, HIGH);
    digitalWrite(D4, HIGH);
  }
  if(a==0){
      digitalWrite(pinA, HIGH);digitalWrite(pinB, HIGH);digitalWrite(pinC, HIGH);digitalWrite(pinD, HIGH);digitalWrite(pinE, HIGH);digitalWrite(pinF, HIGH);digitalWrite(pinG, LOW);   
      delay(5); 
  }
  if(a==1){  
      digitalWrite(pinA, LOW);digitalWrite(pinB, LOW);digitalWrite(pinC, LOW);digitalWrite(pinD, LOW);digitalWrite(pinE, HIGH);digitalWrite(pinF, HIGH);digitalWrite(pinG, LOW);   
      delay(5);
  }
  if(a==2){ 
      digitalWrite(pinA, HIGH);digitalWrite(pinB, HIGH);digitalWrite(pinC, LOW);digitalWrite(pinD, HIGH);digitalWrite(pinE, HIGH);digitalWrite(pinF, LOW);digitalWrite(pinG, HIGH);   
      delay(5);
  }
  if(a==3){
      digitalWrite(pinA, HIGH);digitalWrite(pinB, HIGH);digitalWrite(pinC, HIGH);digitalWrite(pinD, HIGH);digitalWrite(pinE, LOW);digitalWrite(pinF, LOW);digitalWrite(pinG, HIGH);   
      delay(5);
  }
  if(a==4){ 
      digitalWrite(pinA, LOW);digitalWrite(pinB, HIGH);digitalWrite(pinC, HIGH);digitalWrite(pinD, LOW);digitalWrite(pinE, LOW);digitalWrite(pinF, HIGH);digitalWrite(pinG, HIGH);   
      delay(5);
  }
  if(a==5){
      digitalWrite(pinA, HIGH);digitalWrite(pinB, LOW);digitalWrite(pinC, HIGH);digitalWrite(pinD, HIGH);digitalWrite(pinE, LOW);digitalWrite(pinF, HIGH);digitalWrite(pinG, HIGH);   
      delay(5);
  }
  if(a==6){
      digitalWrite(pinA, HIGH);digitalWrite(pinB, LOW);digitalWrite(pinC, HIGH);digitalWrite(pinD, HIGH);digitalWrite(pinE, HIGH);digitalWrite(pinF, HIGH);digitalWrite(pinG, HIGH);   
      delay(5);
  }
  if(a==7){
      digitalWrite(pinA, HIGH);digitalWrite(pinB, HIGH);digitalWrite(pinC, HIGH);digitalWrite(pinD, LOW);digitalWrite(pinE, LOW);digitalWrite(pinF, LOW);digitalWrite(pinG, LOW);   
      delay(5);
  }
  if(a==8){
      digitalWrite(pinA, HIGH);digitalWrite(pinB, HIGH);digitalWrite(pinC, HIGH);digitalWrite(pinD, HIGH);digitalWrite(pinE, HIGH);digitalWrite(pinF, HIGH);digitalWrite(pinG, HIGH);   
      delay(5);
  }
  if(a==9){
      digitalWrite(pinA, HIGH);digitalWrite(pinB, HIGH);digitalWrite(pinC, HIGH);digitalWrite(pinD, HIGH);digitalWrite(pinE, LOW);digitalWrite(pinF, HIGH);digitalWrite(pinG, HIGH);   
      delay(5);
  }
  //B
  if(b==-1){
    digitalWrite(D1, HIGH);
    digitalWrite(D2, HIGH);
    digitalWrite(D3, HIGH);
    digitalWrite(D4, HIGH);
  }else{
    digitalWrite(D1, HIGH);
    digitalWrite(D2, LOW);
    digitalWrite(D3, HIGH);
    digitalWrite(D4, HIGH);
  }
  if(b==0){
      digitalWrite(pinA, HIGH);digitalWrite(pinB, HIGH);digitalWrite(pinC, HIGH);digitalWrite(pinD, HIGH);digitalWrite(pinE, HIGH);digitalWrite(pinF, HIGH);digitalWrite(pinG, LOW);   
      delay(5); 
  }
  if(b==1){  
      digitalWrite(pinA, LOW);digitalWrite(pinB, LOW);digitalWrite(pinC, LOW);digitalWrite(pinD, LOW);digitalWrite(pinE, HIGH);digitalWrite(pinF, HIGH);digitalWrite(pinG, LOW);   
      delay(5);
  }
  if(b==2){ 
      digitalWrite(pinA, HIGH);digitalWrite(pinB, HIGH);digitalWrite(pinC, LOW);digitalWrite(pinD, HIGH);digitalWrite(pinE, HIGH);digitalWrite(pinF, LOW);digitalWrite(pinG, HIGH);   
      delay(5);
  }
  if(b==3){
      digitalWrite(pinA, HIGH);digitalWrite(pinB, HIGH);digitalWrite(pinC, HIGH);digitalWrite(pinD, HIGH);digitalWrite(pinE, LOW);digitalWrite(pinF, LOW);digitalWrite(pinG, HIGH);   
      delay(5);
  }
  if(b==4){ 
      digitalWrite(pinA, LOW);digitalWrite(pinB, HIGH);digitalWrite(pinC, HIGH);digitalWrite(pinD, LOW);digitalWrite(pinE, LOW);digitalWrite(pinF, HIGH);digitalWrite(pinG, HIGH);   
      delay(5);
  }
  if(b==5){
      digitalWrite(pinA, HIGH);digitalWrite(pinB, LOW);digitalWrite(pinC, HIGH);digitalWrite(pinD, HIGH);digitalWrite(pinE, LOW);digitalWrite(pinF, HIGH);digitalWrite(pinG, HIGH);   
      delay(5);
  }
  if(b==6){
      digitalWrite(pinA, HIGH);digitalWrite(pinB, LOW);digitalWrite(pinC, HIGH);digitalWrite(pinD, HIGH);digitalWrite(pinE, HIGH);digitalWrite(pinF, HIGH);digitalWrite(pinG, HIGH);   
      delay(5);
  }
  if(b==7){
      digitalWrite(pinA, HIGH);digitalWrite(pinB, HIGH);digitalWrite(pinC, HIGH);digitalWrite(pinD, LOW);digitalWrite(pinE, LOW);digitalWrite(pinF, LOW);digitalWrite(pinG, LOW);   
      delay(5);
  }
  if(b==8){
      digitalWrite(pinA, HIGH);digitalWrite(pinB, HIGH);digitalWrite(pinC, HIGH);digitalWrite(pinD, HIGH);digitalWrite(pinE, HIGH);digitalWrite(pinF, HIGH);digitalWrite(pinG, HIGH);   
      delay(5);
  }
  if(b==9){
      digitalWrite(pinA, HIGH);digitalWrite(pinB, HIGH);digitalWrite(pinC, HIGH);digitalWrite(pinD, HIGH);digitalWrite(pinE, LOW);digitalWrite(pinF, HIGH);digitalWrite(pinG, HIGH);   
      delay(5);
  }
  //C
  if(c==-1){
    digitalWrite(D1, HIGH);
    digitalWrite(D2, HIGH);
    digitalWrite(D3, HIGH);
    digitalWrite(D4, HIGH);
  }else{
    digitalWrite(D1, HIGH);
    digitalWrite(D2, HIGH);
    digitalWrite(D3, LOW);
    digitalWrite(D4, HIGH);
  }
  if(c==0){
      digitalWrite(pinA, HIGH);digitalWrite(pinB, HIGH);digitalWrite(pinC, HIGH);digitalWrite(pinD, HIGH);digitalWrite(pinE, HIGH);digitalWrite(pinF, HIGH);digitalWrite(pinG, LOW);   
      delay(5); 
  }
  if(c==1){  
      digitalWrite(pinA, LOW);digitalWrite(pinB, LOW);digitalWrite(pinC, LOW);digitalWrite(pinD, LOW);digitalWrite(pinE, HIGH);digitalWrite(pinF, HIGH);digitalWrite(pinG, LOW);   
      delay(5);
  }
  if(c==2){ 
      digitalWrite(pinA, HIGH);digitalWrite(pinB, HIGH);digitalWrite(pinC, LOW);digitalWrite(pinD, HIGH);digitalWrite(pinE, HIGH);digitalWrite(pinF, LOW);digitalWrite(pinG, HIGH);   
      delay(5);
  }
  if(c==3){
      digitalWrite(pinA, HIGH);digitalWrite(pinB, HIGH);digitalWrite(pinC, HIGH);digitalWrite(pinD, HIGH);digitalWrite(pinE, LOW);digitalWrite(pinF, LOW);digitalWrite(pinG, HIGH);   
      delay(5);
  }
  if(c==4){ 
      digitalWrite(pinA, LOW);digitalWrite(pinB, HIGH);digitalWrite(pinC, HIGH);digitalWrite(pinD, LOW);digitalWrite(pinE, LOW);digitalWrite(pinF, HIGH);digitalWrite(pinG, HIGH);   
      delay(5);
  }
  if(c==5){
      digitalWrite(pinA, HIGH);digitalWrite(pinB, LOW);digitalWrite(pinC, HIGH);digitalWrite(pinD, HIGH);digitalWrite(pinE, LOW);digitalWrite(pinF, HIGH);digitalWrite(pinG, HIGH);   
      delay(5);
  }
  if(c==6){
      digitalWrite(pinA, HIGH);digitalWrite(pinB, LOW);digitalWrite(pinC, HIGH);digitalWrite(pinD, HIGH);digitalWrite(pinE, HIGH);digitalWrite(pinF, HIGH);digitalWrite(pinG, HIGH);   
      delay(5);
  }
  if(c==7){
      digitalWrite(pinA, HIGH);digitalWrite(pinB, HIGH);digitalWrite(pinC, HIGH);digitalWrite(pinD, LOW);digitalWrite(pinE, LOW);digitalWrite(pinF, LOW);digitalWrite(pinG, LOW);   
      delay(5);
  }
  if(c==8){
      digitalWrite(pinA, HIGH);digitalWrite(pinB, HIGH);digitalWrite(pinC, HIGH);digitalWrite(pinD, HIGH);digitalWrite(pinE, HIGH);digitalWrite(pinF, HIGH);digitalWrite(pinG, HIGH);   
      delay(5);
  }
  if(c==9){
      digitalWrite(pinA, HIGH);digitalWrite(pinB, HIGH);digitalWrite(pinC, HIGH);digitalWrite(pinD, HIGH);digitalWrite(pinE, LOW);digitalWrite(pinF, HIGH);digitalWrite(pinG, HIGH);   
      delay(5);
  }
  //D
  if(d==-1){
    digitalWrite(D1, HIGH);
    digitalWrite(D2, HIGH);
    digitalWrite(D3, HIGH);
    digitalWrite(D4, HIGH);
  }else{
    digitalWrite(D1, HIGH);
    digitalWrite(D2, HIGH);
    digitalWrite(D3, HIGH);
    digitalWrite(D4, LOW);
  }
  if(d==0){
      digitalWrite(pinA, HIGH);digitalWrite(pinB, HIGH);digitalWrite(pinC, HIGH);digitalWrite(pinD, HIGH);digitalWrite(pinE, HIGH);digitalWrite(pinF, HIGH);digitalWrite(pinG, LOW);   
      delay(5); 
  }
  if(d==1){  
      digitalWrite(pinA, LOW);digitalWrite(pinB, LOW);digitalWrite(pinC, LOW);digitalWrite(pinD, LOW);digitalWrite(pinE, HIGH);digitalWrite(pinF, HIGH);digitalWrite(pinG, LOW);   
      delay(5);
  }
  if(d==2){ 
      digitalWrite(pinA, HIGH);digitalWrite(pinB, HIGH);digitalWrite(pinC, LOW);digitalWrite(pinD, HIGH);digitalWrite(pinE, HIGH);digitalWrite(pinF, LOW);digitalWrite(pinG, HIGH);   
      delay(5);
  }
  if(d==3){
      digitalWrite(pinA, HIGH);digitalWrite(pinB, HIGH);digitalWrite(pinC, HIGH);digitalWrite(pinD, HIGH);digitalWrite(pinE, LOW);digitalWrite(pinF, LOW);digitalWrite(pinG, HIGH);   
      delay(5);
  }
  if(d==4){ 
      digitalWrite(pinA, LOW);digitalWrite(pinB, HIGH);digitalWrite(pinC, HIGH);digitalWrite(pinD, LOW);digitalWrite(pinE, LOW);digitalWrite(pinF, HIGH);digitalWrite(pinG, HIGH);   
      delay(5);
  }
  if(d==5){
      digitalWrite(pinA, HIGH);digitalWrite(pinB, LOW);digitalWrite(pinC, HIGH);digitalWrite(pinD, HIGH);digitalWrite(pinE, LOW);digitalWrite(pinF, HIGH);digitalWrite(pinG, HIGH);   
      delay(5);
  }
  if(d==6){
      digitalWrite(pinA, HIGH);digitalWrite(pinB, LOW);digitalWrite(pinC, HIGH);digitalWrite(pinD, HIGH);digitalWrite(pinE, HIGH);digitalWrite(pinF, HIGH);digitalWrite(pinG, HIGH);   
      delay(5);
  }
  if(d==7){
      digitalWrite(pinA, HIGH);digitalWrite(pinB, HIGH);digitalWrite(pinC, HIGH);digitalWrite(pinD, LOW);digitalWrite(pinE, LOW);digitalWrite(pinF, LOW);digitalWrite(pinG, LOW);   
      delay(5);
  }
  if(d==8){
      digitalWrite(pinA, HIGH);digitalWrite(pinB, HIGH);digitalWrite(pinC, HIGH);digitalWrite(pinD, HIGH);digitalWrite(pinE, HIGH);digitalWrite(pinF, HIGH);digitalWrite(pinG, HIGH);   
      delay(5);
  }
  if(d==9){
      digitalWrite(pinA, HIGH);digitalWrite(pinB, HIGH);digitalWrite(pinC, HIGH);digitalWrite(pinD, HIGH);digitalWrite(pinE, LOW);digitalWrite(pinF, HIGH);digitalWrite(pinG, HIGH);   
      delay(5);
  }
}
