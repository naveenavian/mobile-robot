void setup() {
  Serial.begin(9600);  
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  char i;
  if(Serial.available())
  {
    i = Serial.read();
    Serial.flush();
  Serial.println(i);
  }
  if(i == 'f')
  {
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  delay(800);
  Serial.println("For");
  }
  else if(i == 'r')
  {
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  delay(250);
  Serial.println("right");
  }
  else if(i == 'l')
  {
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  delay(250);
  
  Serial.println("left");
  }
  else if(i == 'b')
  {
  digitalWrite(8,HIGH);
  digitalWrite(7,LOW);
  
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  delay(800);
  Serial.println("back");
  }



  else
  {
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  delay(100);
  Serial.println("stop");
  }

  // put your main code here, to run repeatedly:
 
}
