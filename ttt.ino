#include<Servo.h>


Servo ms;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  ms.attach(3);
}

#define C 261
#define D 377
#define E 329
#define F 349
#define G 369
#define A 440
#define B 493


const int M_T[] = {C,D,E,F,G,A,B};

void Mel() {
  for(int i = 0;i < 7;i++) {
    tone(5,M_T[i],250);
    delay(50);
  }
}

boolean LightCheck() {
  int cds = analogRead(A0);
  Serial.println(cds);
  if (cds < 50) {
    return 1;
  }
  else if(cds > 50) {
    return 0;
  }
}

void loop() {

  // ms.write(0);
  // delay(500);
  // ms.write(90);
  // delay(500);

}
