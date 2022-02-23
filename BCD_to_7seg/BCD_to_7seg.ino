void setup() {
  // put your setup code here, to run once:
pinMode(0,OUTPUT);
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(8,INPUT);
pinMode(9,INPUT);
pinMode(10,INPUT);
pinMode(11,INPUT);
}

void loop() {
int a,b,c,d,e,f,g;
int w,x,y,z;
w=digitalRead(11);
x=digitalRead(10);
y=digitalRead(9);
z=digitalRead(8);

a=!w&!x&!y&!z | !w&!x&y&!z | !w&!x&y&z | !w&x&!y&z | !w&x&y&!z | !w&x&y&z | w&!x&!y&!z | w&!x&!y&z;
b=!w&!x&!y&!z | !w&!x&y&!z | !w&!x&!y&z | !w&!x&y&z | !w&x&!y&!z | !w&x&y&z | w&!x&!y&!z | w&!x&!y&z;

c=!w&!x&!y&!z | !w&!x&!y&z | !w&!x&y&z | !w&x&!y&!z | !w&x&!y&z | !w&x&y&!z | !w&x&y&z | w&!x&!y&!z | w&!x&!y&z; // finish this code
d=!w&!x&!y&!z | !w&!x&y&!z | !w&!x&y&z | !w&x&!y&z | !w&x&y&!z | w&!x&!y&!z | w&!x&!y&z; // finish this code
e=!w&!x&!y&!z | !w&!x&y&!z | !w&x&y&!z | !w&x&y&!z | w&!x&!y&!z; //finish this code
f=!w&!x&!y&!z | !w&x&!y&z | !w&x&y&!z | !w&x&!y&!z | w&!x&!y&!z | w&!x&!y&z;  //finish this code
g=w&x&y&z | !w&x&!y&!z | !w&!x&y&z | !w&!x&y&!z | !w&x&!y&z | !w&x&y&!z | w&!x&!y&!z | w&!x&!y&z;  //finish this code


digitalWrite(0,a);
digitalWrite(1,b);
digitalWrite(2,c);
digitalWrite(3,d);
digitalWrite(4,e);
digitalWrite(5,f);
digitalWrite(6,g);



  
  

}
