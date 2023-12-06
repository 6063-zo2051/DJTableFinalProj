// set constants for buttons
const int Button1 = 2;
const int Button2 = 3;

bool audioState = false;

void setup() {
  pinMode(Button1, INPUT);
  pinMode(Button2, INPUT);
}

void loop() {

//if (digitalRead(Button1) == LOW) {
    //if (!audioState) {
     // startSong();
      //audioState = true

    //}

//if (digitalRead(Button2) == LOW) {
   // if (audioState) {
     // pauseSong();
     // audioState = false;
  //  }

int valueB1 = digitalRead(Button1);
int valueB2 = digitalRead(Button2);

Serial.println(String(valueB1) + " " + valueB2);
delay(10);

}

//function startSong() {
