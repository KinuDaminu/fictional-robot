/* wustl - Washington University of St.Louise
 * 
 * Finite State Machine (FSM) is an abstract model of a machine
 * FSMs can be in exactly one of the finite states
 * They can transition from one state to another as per condition.
 * 
 * This machine has 8 states, conditioned to cycle through each other.
 */

enum State {
  up0, 
  up1, 
  up2,
  up3,
  up4,
  up5,
  up6,
  up7
};

byte bit1 = 0;
byte bit2 = 0;
byte bit3 = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Initialized!");
}

State s = up2;

void loop() {
  
nextState(s);
delay(200);

Serial.print(s);
Serial.print(" - ");

}

void nextState(State state) {

  switch(state){
    case up0:

      bit1 = 0;
      bit2 = 0;
      bit3 = 0;

      Serial.print(bit1);
      Serial.print(bit2);
      Serial.println(bit3);

      s = up1;

      break;

    case up1:

      bit1 = 0;
      bit2 = 0;
      bit3 = 1;

      Serial.print(bit1);
      Serial.print(bit2);
      Serial.println(bit3);

      s = up2;

      break;

    case up2:

      bit1 = 0;
      bit2 = 1;
      bit3 = 0;

      Serial.print(bit1);
      Serial.print(bit2);
      Serial.println(bit3);

      s = up3;

      break;

    case up3:

      bit1 = 0;
      bit2 = 1;
      bit3 = 1;

      Serial.print(bit1);
      Serial.print(bit2);
      Serial.println(bit3);

      s = up4;

      break;

    case up4:

      bit1 = 1;
      bit2 = 0;
      bit3 = 0;

      Serial.print(bit1);
      Serial.print(bit2);
      Serial.println(bit3);

      s = up5;

      break;

    case up5:

      bit1 = 1;
      bit2 = 0;
      bit3 = 1;

      Serial.print(bit1);
      Serial.print(bit2);
      Serial.println(bit3);

      s = up6;

      break;

    case up6:

      bit1 = 1;
      bit2 = 1;
      bit3 = 0;

      Serial.print(bit1);
      Serial.print(bit2);
      Serial.println(bit3);

      s = up7;

      break;

    case up7:

      bit1 = 1;
      bit2 = 1;
      bit3 = 1;

      Serial.print(bit1);
      Serial.print(bit2);
      Serial.println(bit3);

      s = up0;

      break;

    default:

      Serial.println("No State");
  }
}
