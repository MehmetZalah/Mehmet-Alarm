//define fire1 pins
#define powerfire1 A3
#define gndfire1 A4
#define isfire1 A2

//define fire2 pins
#define isfire2 A5

//define fire3 pins
#define powerfire3 13
#define gndfire3 A1
#define isfire3 A0

//define fire output
#define gofire 4

void setup() {

              //fire 1 initialization
              pinMode(gndfire1, OUTPUT);
              digitalWrite(gndfire1, LOW);
              pinMode(powerfire1, OUTPUT);
              digitalWrite(powerfire1, HIGH);
              pinMode(isfire1, INPUT);

              //fire 2 initialization
              pinMode(isfire2, INPUT);

              //fire 3 initialization
              pinMode(gndfire3, OUTPUT);
              digitalWrite(gndfire3, LOW);
              pinMode(powerfire3, OUTPUT);
              digitalWrite(powerfire3, HIGH);
              pinMode(isfire3, INPUT);

              //fire Output
              pinMode(gofire, OUTPUT);
              digitalWrite(gofire, LOW);
}

void loop() {

              Mehmetfire();
}


void Mehmetfire(){


              if(digitalRead(isfire1)==HIGH && digitalRead(isfire2)==HIGH && digitalRead(isfire3)==HIGH){

                  digitalWrite(gofire, LOW);
              }

              if(digitalRead(isfire1)==LOW || digitalRead(isfire2)==LOW || digitalRead(isfire3)==LOW){

                  digitalWrite(gofire, HIGH);
              }
}
