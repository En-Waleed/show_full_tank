const int trig = 3;
const int echo = 2;
const int led1=10,led2=11,led3=12,led4=13;
long int t ;
long int d ;

void setup(){
  for(int i =9;i<=13;i++){ pinMode(i, OUTPUT);}
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT); 
  Serial.begin(9600);
}
void loop() {
      digitalWrite(trig,LOW);
      delayMicroseconds(2);
      digitalWrite(trig, HIGH); 
      delayMicroseconds(10);
      digitalWrite(trig, LOW);
      t = pulseIn (echo,HIGH);
      d = 0.0346*t/2;
  Serial.println(d);
  
  if(d<83)
          {digitalWrite(led1, HIGH); 
           digitalWrite(led2, LOW); 
           digitalWrite(led3, LOW); 
           digitalWrite(led4, LOW);} 
   if(d>83&&d<168)
          {digitalWrite(led1, HIGH); 
           digitalWrite(led2, HIGH); 
           digitalWrite(led3, LOW); 
           digitalWrite(led4, LOW);} 
   if(d>168&&d<250)
          {digitalWrite(led1, HIGH); 
           digitalWrite(led2, HIGH); 
           digitalWrite(led3, HIGH); 
           digitalWrite(led4, LOW);} 
   if(d>250)
          {digitalWrite(led1, HIGH); 
           digitalWrite(led2, HIGH); 
           digitalWrite(led3, HIGH); 
           digitalWrite(led4, HIGH);} 
   }