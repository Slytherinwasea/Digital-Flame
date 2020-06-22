int STATE_FLAME = 1;
int flamepin = 8;
int k ;
void getFlame(int flamepin){
  if (STATE_FLAME == 1){
    k = digitalRead(flamepin);
    if(k == HIGH){
      Serial.println("Fire");
      }
    else{
      Serial.println("No fire");
      }
    }
    else{
      Serial.println("No data");
      }
  }
void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(flamepin,INPUT);
}

void loop() {
  getFlame(flamepin);
  delay(500);
}
