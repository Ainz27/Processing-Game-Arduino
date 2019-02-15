int buttonpin = 3;
int buttonpin2 = 2;

void setup (){
  Serial.begin(9600);
  pinMode (buttonpin, INPUT);
    pinMode (buttonpin2, INPUT);
 
}

void loop (){

  int sign1=digitalRead(buttonpin);
  int sign2= digitalRead (buttonpin2);
  if(sign1 == HIGH){
    Serial.print(buttonpin, DEC);
  }
 if (sign2 == HIGH){
    Serial.print(buttonpin2, DEC);
    }  
}

