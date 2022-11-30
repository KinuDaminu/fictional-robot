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

void setup() {
  Serial.begin(9600);
  Serial.println("Initialized!");
}

State s = up0;

void loop() {
  // put your main code here, to run repeatedly:

nextState(s);

}

nextState(State) {

  switch(state){
    case up0:

      bit1 = 0;
      bit2 = 0;
      bit3 = 0;

      Serial.print(bit3);
      Serial.print(bit2);
      Serial.println(bit1);

      state = up1;

      break;

    case up1:

      bit1 = 0;
      bit2 = 0;
      bit3 = 1;

      Serial.print(bit3);
      Serial.print(bit2);
      Serial.println(bit1);

      state = up2;

      break;

    case up2:

      bit1 = 0;
      bit2 = 1;
      bit3 = 0;

      Serial.print(bit3);
      Serial.print(bit2);
      Serial.println(bit1);

      state = up3;

      break;

    case up3:

      bit1 = 0;
      bit2 = 1;
      bit3 = 1;

      Serial.print(bit3);
      Serial.print(bit2);
      Serial.println(bit1);

      state = up4;

      break;

    case up4:

      bit1 = 1;
      bit2 = 0;
      bit3 = 0;

      Serial.print(bit3);
      Serial.print(bit2);
      Serial.println(bit1);

      state = up5;

      break;

    case up5:

      bit1 = 1;
      bit2 = 0;
      bit3 = 1;

      Serial.print(bit3);
      Serial.print(bit2);
      Serial.println(bit1);

      state = up6;

      break;

    case up6:

      bit1 = 1;
      bit2 = 1;
      bit3 = 0;

      Serial.print(bit3);
      Serial.print(bit2);
      Serial.println(bit1);

      state = up7;

      break;

    case up7:

      bit1 = 1;
      bit2 = 1;
      bit3 = 1;

      Serial.print(bit3);
      Serial.print(bit2);
      Serial.println(bit1);

      state = up0;

      break;
  }
}
