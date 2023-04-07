
int dirPin = 4; // D4 na arduinu
int stepPin = 5; // D5 na arduinu

int brojac=0;
int brojack = 0;


void setup() {
  pinMode(10, INPUT);
  pinMode(7,INPUT);

  
pinMode(dirPin, OUTPUT);
 pinMode(stepPin, OUTPUT);
 Serial.begin(9600); //Broj bitova u sekundi


}


/////////////////////////////////


void korak(int k)
{
  if(k==1)
digitalWrite(dirPin, HIGH);
else
digitalWrite(dirPin, LOW);

digitalWrite(stepPin, HIGH);

delay(3);

digitalWrite(stepPin, LOW);

delay(2);
 
  
  
  }

  void krug(int k)
{
  if(k==1)
digitalWrite(dirPin, HIGH);
else
digitalWrite(dirPin, LOW);

  
  

digitalWrite(stepPin, HIGH);

delay(3);

digitalWrite(stepPin, LOW);

delay(2);
  
  }
  
  

//////////////////////////////////////////////////////
void loop(){

while(digitalRead(10))
{
    
  for(brojac; brojac<100; brojac++){
    
    if(digitalRead(10)==1)
    {
      
      Serial.println(digitalRead(10));
     
      }
      else
      {
        krug(1);
        brojac = 110;
        }

        
     delay(1);
    }

     korak(1);
  
  
}



brojac = 0;

while(digitalRead(7))
{
    
  for(brojack; brojack<100; brojack++){
    
    if(digitalRead(7)==1)
    {
      
      Serial.println(digitalRead(7));
     
      }
      else
      {
        krug(0);
        brojack = 110;
        }

        
     delay(1);
    }

     korak(0);
  
  
}



brojack = 0;


}
