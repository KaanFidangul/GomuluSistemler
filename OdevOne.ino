int led[5] = {13,12,11,10,9};
int butOne = 7;
int butTwo = 6;
int butThr = 5;
int i = 0;
int j = 0;

void setup()
{

  
  for(i; i < 5; i++) pinMode(led[i], OUTPUT);
  pinMode(butOne, INPUT);
  pinMode(butTwo, INPUT);
  pinMode(butThr, INPUT);
  
}

void loop()
{

  if(digitalRead(butOne) == HIGH){
    
    for(i = 0; i<5; i++) {
     
      digitalWrite(led[i],HIGH);
      delay(500);
      digitalWrite(led[i],LOW);
      delay(500);
    }
   
  }
  
  if(digitalRead(butTwo) == HIGH) {
   
    for(i = 4; i>-1; i--){
     
      digitalWrite(led[i],HIGH);
      delay(500);
    }
  }
  
  if(digitalRead(butThr) == HIGH) {
    i = 0;
    while(i<10) {
      for(j = 0; j <5; j++){
        
        digitalWrite(led[j],HIGH);
        
      }
      delay(800);
      
      for(j = 0; j<5; j++) {
       
        digitalWrite(led[j],LOW);
      }
      delay(800);
      i++;
      
    }
    
  }
}
