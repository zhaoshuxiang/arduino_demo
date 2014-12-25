// 跑马灯效果

byte ledPin[] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

int ledDelay(65);
int direction = 1;
int currentLED = 0;

unsigned long changTime;

void setup() {
  for(int i = 0; i < 10; x++) {
    pinModel(ledpin[i], OUTPUT);
  }
  
  changeTime = millis();
}
