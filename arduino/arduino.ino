char userInput;
int m1 = 10;
int d1 = 9;
void setup() {
  Serial.begin(9600);
  pinMode(m1, OUTPUT);
  pinMode(d1, OUTPUT);
  pinMode(LED_BUILTIN,OUTPUT);
}

void loop() {
 if(Serial.available()>0){
   userInput=Serial.read();
    if(userInput == 'o'){
      digitalWrite(LED_BUILTIN,HIGH);
      analogWrite(d1, -255);
      digitalWrite(m1, HIGH);
    }
    if(userInput=='x'){
      digitalWrite(LED_BUILTIN,LOW);
      analogWrite(d1, 0);
      digitalWrite(m1, LOW);
    }
 }
}
