//define fire pins
#define powerfire A3
#define gndfire A4
#define isfire A2

//define fire output
#define gofire 4

void setup() {

              //fire initialization
              pinMode(gndfire, OUTPUT);
              digitalWrite(gndfire, LOW);
              pinMode(powerfire, OUTPUT);
              digitalWrite(powerfire, HIGH);
              pinMode(isfire, INPUT);

              //fire Output
              pinMode(gofire, OUTPUT);
              digitalWrite(gofire, LOW);
}

void loop() {

              Mehmetfire();
}


void Mehmetfire(){

              if(digitalRead(isfire)==HIGH){

                  digitalWrite(gofire, LOW);
              }

              if(digitalRead(isfire)==LOW){

                  digitalWrite(gofire, HIGH);
              }
}
