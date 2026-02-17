// LED pins
int greenLed = 21;
int redLed   = 17;
int blueLed  = 16;
int ldrPin = 32;
int R, G, B;


struct Color {
  String name;
  int Rmin, Rmax;
  int Gmin, Gmax;
  int Bmin, Bmax;
};

Color colors[] = {
  {"RED",     200,400, 0,10, 0,100},
  {"GREEN",    0,70, 70,150, 100,200},
  {"BLUE",    0,10, 0,100, 300,1000},
  {"ORANGE",  200,400, 15,100, 10,100},
  {"PURPLE",  50,150, 0,50, 200,400},
  {"WHITE",   200,1000, 200,1000, 500,1000},
  {"BLACK",      0, 10,    0, 10,    0, 10}
};

const int numColors = sizeof(colors)/sizeof(colors[0]);

void setup() {
  Serial.begin(115200);
  delay(3000);

  pinMode(greenLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(blueLed, OUTPUT);

  digitalWrite(greenLed, LOW);
  digitalWrite(redLed, LOW);
  digitalWrite(blueLed, LOW);

  // -------- GREEN LED --------
  digitalWrite(greenLed, HIGH);
  delay(500);  // wait for stable reading

  int G = analogRead(ldrPin);
  Serial.print("Green LED value: ");
  Serial.println(G);

  digitalWrite(greenLed, LOW);
  delay(500);


  // -------- RED LED --------
  digitalWrite(redLed, HIGH);
  delay(500);

  int R = analogRead(ldrPin);
  Serial.print("Red LED value: ");
  Serial.println(R);

  digitalWrite(redLed, LOW);
  delay(500);


  // -------- BLUE LED --------
  digitalWrite(blueLed, HIGH);
  delay(500);

  int B = analogRead(ldrPin);
  Serial.print("Blue LED value: ");
  Serial.println(B);

  digitalWrite(blueLed, LOW);
  // Compare with dataset

  bool found = false;
  for(int i=0;i<numColors;i++){
    if(R >= colors[i].Rmin && R <= colors[i].Rmax &&
       G >= colors[i].Gmin && G <= colors[i].Gmax &&
       B >= colors[i].Bmin && B <= colors[i].Bmax){
         Serial.print("Detected Color: ");
         Serial.println(colors[i].name);
         found = true;
         break;
    }
  }

  if(!found) Serial.println("Detected Color: UNKNOWN");
}


void loop() {

}
