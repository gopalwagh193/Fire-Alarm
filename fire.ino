void setup() {
  // put your setup code here, to run once:
  pinMode(0,INPUT);
  pinMode(1,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int a = digitalRead(0);
if(a == 1)
{
  digitalWrite(1,LOW);
}
else if(a == 0)
 {   digitalWrite(1,HIGH);

}
}
