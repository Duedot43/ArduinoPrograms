#include <NewPing.h>


//NewPing needs ( Trigger Pin , Echo Pin , Distance )
NewPing sonar(11 , 10 , 300); // NewPing setup of pins and maximum distance.


void setup() {
  Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(sonar.ping_cm());
}
