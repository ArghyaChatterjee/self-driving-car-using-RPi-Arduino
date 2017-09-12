#include <AFMotor.h>
AF_DCMotor BackMotor(1);
AF_DCMotor FrontMotor(3);
int a;
int b;
int c;
int d;
void setup() {
pinMode(A0, INPUT);
pinMode(A1, INPUT);
pinMode(A2, INPUT);
pinMode(A3, INPUT);

}

void loop() {

a = analogRead(A0);  
b = analogRead(A1);
c = analogRead(A2);
d = analogRead(A3);

 if(a >= 512)
 FrontMotor.run(FORWARD);
 else if(b >= 512)
 FrontMotor.run(BACKWARD);
 else if(c >= 512)
 BackMotor.run(FORWARD);
 else if(d >= 512)
 BackMotor.run(BACKWARD);
 else
 FrontMotor.run(RELEASE);
 BackMotor.run(RELEASE);
 
}
