int ls;
int cs;
int rs;
int lmt1=5;
int lmt2=3;
int rmt1=6;
int rmt2=11;
void setup() 
 {
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(5,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(11,OUTPUT);
  }
void loop() {
  ls=digitalRead(7);
  cs=digitalRead(8);
  rs=digitalRead(9);
  if(ls==HIGH&&cs==HIGH&&rs==HIGH)
  {
    forward();
  }
  else if(ls==HIGH&&cs==LOW&&rs==HIGH)
  {
    reverse();
    delay(200);
    left();
    delay(200);
  }
  else if(ls==LOW&&cs==HIGH&&rs==HIGH)
  {
    right();
  }
  else if(ls==HIGH&&cs==HIGH&&rs==LOW)
  {
    left();
  }
  else if(ls==LOW&&cs==HIGH&&rs==LOW)
  {
    reverse();
    delay(200);
    left();
    delay(200);
  }
  else if(ls==LOW&&cs==LOW&&rs==HIGH)
  {
    reverse();
    delay(200);
    right();
    delay(200);
  }
  else if(ls==HIGH&&cs==LOW&&rs==LOW)
  {
    reverse();
    delay(200);
    left();
    delay(200);
  }
  else if(ls==LOW&&cs==LOW&&rs==LOW)
  {
    reverse();
    delay(200);
    left();
    delay(200);
  }

}
void forward()
{
  analogWrite(lmt1,150);
  analogWrite(lmt2,0);
  analogWrite(rmt1,150);
  analogWrite(rmt2,0);
}
void reverse()
{
  analogWrite(lmt1,0);
  analogWrite(lmt2,150);
  analogWrite(rmt1,0);
  analogWrite(rmt2,150);
}
void left()
{
  analogWrite(lmt1,0);
  analogWrite(lmt2,150);
  analogWrite(rmt1,150);
  analogWrite(rmt2,0);
}
void right()
{
  analogWrite(lmt1,150);
  analogWrite(lmt2,0);
  analogWrite(rmt1,0);
  analogWrite(rmt2,150);
}
void stp()
{
  analogWrite(lmt1,0);
  analogWrite(lmt2,0);
  analogWrite(rmt1,0);
  analogWrite(rmt2,0);
}
void stpleft()
{
  analogWrite(lmt1,0);
  analogWrite(lmt2,0);
  analogWrite(rmt1,150);
  analogWrite(rmt2,0);
}
void stpright()
{
  analogWrite(lmt1,150);
  analogWrite(lmt2,0);
  analogWrite(rmt1,0);
  analogWrite(rmt2,0);
}
