int x,y,z;
int right=3;
int centre=5;
int left = 6;
int right1 = 7;
int right2 = 8;
int left1 = 9;
int left2 = 10;
void setup() {
  // put your setup code here, to run once:
pinMode(right,INPUT);
pinMode(centre,INPUT);
pinMode(left,INPUT);
pinMode(right1,OUTPUT);
pinMode(right2,OUTPUT);
pinMode(left1,OUTPUT);
pinMode(left2,OUTPUT);
}

void loop() {
  x=digitalRead(right);
  y=digitalRead(centre);
  z=digitalRead(left);


  LEFT();
  RIGHT();
  FORWARD();
  STOP();


}


void  LEFT()
{
  if(x==0 &&y==1 &&z==1||x==0 &&y==0 &&z==1 ) 
  digitalWrite(right1,1);
  digitalWrite(right2,0);
  digitalWrite(left1,0);
  digitalWrite(left2,0);
  }
void  RIGHT()
  {
  if(x==1 &&y==1 &&z==0||x==1 &&y==0 &&z==0 ) 
  digitalWrite(right1,0);
  digitalWrite(right2,0);
  digitalWrite(left1,1);
  digitalWrite(left2,0);
  }

 void FORWARD()
  {
  if(x==1 &&y==0 &&z==1) 
  digitalWrite(right1,1);
  digitalWrite(right2,0);
  digitalWrite(left1,1);
  digitalWrite(left2,0);
  }

   void STOP()
  {
    if(x==0 &&y==0 &&z==0) 
  digitalWrite(right1,0);
  digitalWrite(right2,0);
  digitalWrite(left1,0);
  digitalWrite(left2,0);
  }
  // put your main code here, to run repeatedly:
