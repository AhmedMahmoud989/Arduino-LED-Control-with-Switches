int greena =3;
int reda =5;
int greenb =6;
int redb =9;
int slidea =1;
int slideb =2;
int readinga =0;
int readingb =0;

void setup()
{
  pinMode(slidea,0);
  pinMode(slideb,0);
}

void loop()
{
  readinga=digitalRead(slidea);
  readingb=digitalRead(slideb);
  if (readinga==1 )
  {
    analogWrite(greena,128);
          analogWrite(reda,255);
    delay(100);
    }
  else {
  analogWrite(greena,0);
          analogWrite(reda,0);
    delay(100);
    
   
  }   
  
  
  if (readingb==1){
  analogWrite(greenb,128);
    analogWrite(redb,255);
    delay(100);
  }
     else {
  analogWrite(greenb,0);
    analogWrite(redb,0);
    delay(100);
    
   
  }   
        
        
      
    }

  
  

 
 
 
 
                       

    
    
  
 
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
