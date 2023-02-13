int trigger = 12,echo = 13,led = 7,led2 = 8,spk = 6,cm,inch,duration = 0;
void setup(){ 
pinMode(trigger,OUTPUT); 
pinMode(echo,INPUT); 
pinMode(led,OUTPUT); 
pinMode(led2,OUTPUT); 
pinMode(spk,OUTPUT); }
void loop(){ 
Serial.begin(9600);
digitalWrite(trigger,HIGH); 
digitalWrite(trigger, LOW); 
duration = pulseIn(echo,HIGH),cm = duration*0.034/2,inch = duration*0.0133/2; 
if (inch < 100) { 
digitalWrite(led2,LOW); 
digitalWrite(led,HIGH); 
digitalWrite(spk,HIGH);
Serial.println("Motion detected below 100 inches");} 
else { 
digitalWrite(led2,HIGH); 
digitalWrite(led,LOW);
digitalWrite(spk,LOW);
Serial.println("Motion Stopped");
} 
delay(500);
}
