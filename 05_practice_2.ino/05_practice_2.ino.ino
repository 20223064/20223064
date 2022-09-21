void setup() {
  pinMode(7, OUTPUT);  
  digitalWrite(7, 0);
delay(1000);
}

int i =1;

void loop(){
while(i<6)
  {digitalWrite(7, 1);
  delay(100);            
  digitalWrite(7, 0);  
  delay(100); 
++i;
  }    

digitalWrite(7, 1);
}
