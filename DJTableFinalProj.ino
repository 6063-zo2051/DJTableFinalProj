// set constants for buttons
const int But1 = 2;
const int But2 = 4;

// bool audioState = false;

void setup() {
  pinMode(But1, INPUT);
  pinMode(But2, INPUT);
  Serial.begin(9600);
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

int valB1 = digitalRead(But1);
int valB2 = digitalRead(But2);

Serial.println(String(valB1) + " " + valB2);
delay(10);

}

//function startSong() {
