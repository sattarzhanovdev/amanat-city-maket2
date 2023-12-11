#include <SoftwareSerial.h>
#include <Adafruit_NeoPixel.h>

int allLeds = 169;
int allLeds2 = 117;

Adafruit_NeoPixel a_block = Adafruit_NeoPixel(326, 2, NEO_RGB + NEO_KHZ800);
Adafruit_NeoPixel b_block = Adafruit_NeoPixel(allLeds, 3, NEO_RGB + NEO_KHZ800);
int bright = 150;

SoftwareSerial bluetooth(0, 1);

void setup() {
  a_block.begin();
  b_block.begin();
  Serial.begin(9600);
  bluetooth.begin(9600);

  a_block.clear();
  b_block.clear();
}

long lastBlock = "<";
long lastEntrance = "1";
long lastFloor;
long res;

void loop() {
  res = (Serial.read());

  switch (res){
    case '_':
      a_block.clear();
      for (int i = 0; i < 326; i++) {
        a_block.setBrightness(bright);
        a_block.setPixelColor(i, a_block.Color(0, 0, 0));
        a_block.show();
      }
      break;
    case 'D':
      a_block.clear();
      for (int i = 0; i < 326; i++) {
        if(i % 4 == 1){
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }
      break;
    case 'v':
      a_block.clear();
      for (int i = 0; i < 326; i++) {
        a_block.setBrightness(bright);
        a_block.setPixelColor(i, a_block.Color(255, 255, 150));
        a_block.show();
      }
      break;
    case '<':
      lastBlock = '<';
      a_block.clear();
      for (int i = 0; i < 169; i++) {
        a_block.setBrightness(bright);
        a_block.setPixelColor(i, a_block.Color(255, 255, 150));
        a_block.show();
      }
      break;
    case '>':
      lastBlock = '>';
      a_block.clear();
      for (int i = 169; i < 300; i++) {
        a_block.setBrightness(bright);
        a_block.setPixelColor(i, a_block.Color(255, 255, 150));
        a_block.show();
      }
      break;
    case '1':
      a_block.clear();
      lastEntrance = "1";
      if(lastBlock == '<'){
        for (int i = 0; i < 78; i++) {
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }else{

      }
      break;
    case '2':
      a_block.clear();
      lastEntrance = "2";
      if(lastBlock == '<'){
        for (int i = 78; i < 169; i++) {
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }else {

      }
      break;
    case 'a':
      a_block.clear();
      b_block.clear();
      lastFloor = "1";
      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          for (int i = 0; i < 6; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else{
          for (int i = 78; i < 85; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }else{
        for (int i = 169; i < 175; i++) {
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }
      break;
    case 'b':
      a_block.clear();
      lastFloor = "2";
      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          for (int i = 6; i < 12; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else{
          for (int i = 85; i < 92; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }else{
        for (int i = 175; i < 181; i++) {
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }
      break;
    case 'c':
      a_block.clear();
      lastFloor = "3";

      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          for (int i = 12; i < 18; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else{
          for (int i = 92; i < 99; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }else{
        for (int i = 181; i < 187; i++) {
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }
      
      break;
    case 'd':
      a_block.clear();
      lastFloor = "4";

      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          for (int i = 18; i < 24; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else{
          for (int i = 99; i < 106; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }else{
        for (int i = 187; i < 193; i++) {
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }
      break;
    case 'e':
      a_block.clear();
      lastFloor = "5";

      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          for (int i = 24; i < 30; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else{
          for (int i = 106; i < 113; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }else{
        for (int i = 193; i < 199; i++) {
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }
      break;
    case 'f':
      a_block.clear();
      lastFloor = "6";

      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          for (int i = 30; i < 36; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else{
          for (int i = 113; i < 120; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }else{
        for (int i = 199; i < 205; i++) {
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }
      break;
    case 'g':
      a_block.clear();
      lastFloor = "7";
      
      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          for (int i = 36; i < 42; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else{
          for (int i = 120; i < 127; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }else{
        for (int i = 205; i < 211; i++) {
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }
      break;
    case 'h':
      a_block.clear();
      lastFloor = "8";
      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          for (int i = 42; i < 48; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else{
          for (int i = 127; i < 134; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }else{
        for (int i = 211; i < 217; i++) {
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }
      break;
    case 'i':
      a_block.clear();
      lastFloor = "9";
     
      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          for (int i = 48; i < 54; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else{
          for (int i = 134; i < 141; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }else{
        for (int i = 217; i < 223; i++) {
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }
      break;
    case 'j':
      a_block.clear();
      lastFloor = "10";

      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          for (int i = 54; i < 60; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else{
          for (int i = 141; i < 148; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }else{
        for (int i = 223; i < 229; i++) {
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }
      break;
    case 'k':
      a_block.clear();
      lastFloor = "11";
      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          for (int i = 60; i < 66; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else{
          for (int i = 148; i < 155; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }else{
        for (int i = 229; i < 235; i++) {
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }
      break;
    case 'l':
      a_block.clear();
      lastFloor = "12";
      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          for (int i = 66; i < 72; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else{
          for (int i = 155; i < 162; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }else{
        for (int i = 235; i < 241; i++) {
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }

      break;
    case 'm':
      a_block.clear();
      lastFloor = "13";

      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          for (int i = 72; i < 78; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else{
          for (int i = 162; i < 169; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }else{
        for (int i = 241; i < 247; i++) {
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      break;

    case '4':
      a_block.clear();
      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          if(lastFloor == "1"){
            for (int i = 0; i < 2; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "2"){
            for (int i = 6; i < 8; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "3"){
            for (int i = 12; i < 14; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "4"){
            for (int i = 18; i < 20; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "5"){
            for (int i = 24; i < 26; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "6"){
            for (int i = 30; i < 32; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "7"){
            for (int i = 36; i < 38; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "8"){
            for (int i = 42; i < 44; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "9"){
            for (int i = 48; i < 50; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "10"){
            for (int i = 54; i < 56; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "11"){
            for (int i = 60; i < 62; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "12"){
            for (int i = 66; i < 68; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "13"){
            for (int i = 72; i < 74; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }
        }else{
          if(lastFloor == "1"){
            for (int i = 78; i < 80; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "2"){
            for (int i = 85; i < 87; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "3"){
            for (int i = 92; i < 94; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "4"){
            for (int i = 99; i < 101; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "5"){
            for (int i = 106; i < 108; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "6"){
            for (int i = 113; i < 115; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "7"){
            for (int i = 120; i < 122; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "8"){
            for (int i = 127; i < 129; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "9"){
            for (int i = 134; i < 136; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "10"){
            for (int i = 141; i < 143; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "11"){
            for (int i = 148; i < 150; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "12"){
            for (int i = 155; i < 157; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "13"){
            for (int i = 162; i < 164; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }
        }
      }else {
        if(lastFloor == "1"){
          for (int i = 169; i < 171; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "2"){
          for(int i = 175; i < 177; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "3"){
          for(int i = 181; i < 183; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "4"){
          for(int i = 187; i < 189; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "5"){
          for(int i = 193; i < 195; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "6"){
          for(int i = 199; i < 201; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "7"){
          for(int i = 205; i < 207; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "8"){
          for(int i = 211; i < 213; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "9"){
          for(int i = 217; i < 219; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "10"){
          for(int i = 223; i < 225; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "11"){
          for(int i = 229; i < 231; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "12"){
          for(int i = 235; i < 237; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "13"){
          for(int i = 241; i < 243; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }
      break;
    case '5':
      a_block.clear();
      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          if(lastFloor == "1"){
            for (int i = 2; i < 4; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "2"){
            for (int i = 8; i < 10; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "3"){
            for (int i = 14; i < 16; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "4"){
            for (int i = 20; i < 22; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "5"){
            for (int i = 26; i < 28; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "6"){
            for (int i = 32; i < 34; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "7"){
            for (int i = 38; i < 40; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "8"){
            for (int i = 44; i < 46; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "9"){
            for (int i = 50; i < 52; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "10"){
            for (int i = 56; i < 58; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "11"){
            for (int i = 62; i < 64; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "12"){
            for (int i = 66; i < 68; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "13"){
            for (int i = 72; i < 74; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }
        }else{
          if(lastFloor == "1"){
            for (int i = 80; i < 81; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
            }else if(lastFloor == "2"){
              for (int i = 87; i < 88; i++) {
                a_block.setBrightness(bright);
                a_block.setPixelColor(i, a_block.Color(255, 255, 150));
                a_block.show();
              }
            }else if(lastFloor == "3"){
              for (int i = 94; i < 95; i++) {
                a_block.setBrightness(bright);
                a_block.setPixelColor(i, a_block.Color(255, 255, 150));
                a_block.show();
              }
            }else if(lastFloor == "4"){
              for (int i = 101; i < 102; i++) {
                a_block.setBrightness(bright);
                a_block.setPixelColor(i, a_block.Color(255, 255, 150));
                a_block.show();
              }
            }else if(lastFloor == "5"){
              for (int i = 108; i < 109; i++) {
                a_block.setBrightness(bright);
                a_block.setPixelColor(i, a_block.Color(255, 255, 150));
                a_block.show();
              }
            }else if(lastFloor == "6"){
              for (int i = 115; i < 116; i++) {
                a_block.setBrightness(bright);
                a_block.setPixelColor(i, a_block.Color(255, 255, 150));
                a_block.show();
              }
            }else if(lastFloor == "7"){
              for (int i = 122; i < 123; i++) {
                a_block.setBrightness(bright);
                a_block.setPixelColor(i, a_block.Color(255, 255, 150));
                a_block.show();
              }
            }else if(lastFloor == "8"){
              for (int i = 129; i < 130; i++) {
                a_block.setBrightness(bright);
                a_block.setPixelColor(i, a_block.Color(255, 255, 150));
                a_block.show();
              }
            }else if(lastFloor == "9"){
              for (int i = 136; i < 137; i++) {
                a_block.setBrightness(bright);
                a_block.setPixelColor(i, a_block.Color(255, 255, 150));
                a_block.show();
              }
            }else if(lastFloor == "10"){
              for (int i = 143; i < 144; i++) {
                a_block.setBrightness(bright);
                a_block.setPixelColor(i, a_block.Color(255, 255, 150));
                a_block.show();
              }
            }else if(lastFloor == "11"){
              for (int i = 150; i < 151; i++) {
                a_block.setBrightness(bright);
                a_block.setPixelColor(i, a_block.Color(255, 255, 150));
                a_block.show();
              }
            }else if(lastFloor == "12"){
              for (int i = 157; i < 158; i++) {
                a_block.setBrightness(bright);
                a_block.setPixelColor(i, a_block.Color(255, 255, 150));
                a_block.show();
              }
            }else if(lastFloor == "13"){
              for (int i = 164; i < 165; i++) {
                a_block.setBrightness(bright);
                a_block.setPixelColor(i, a_block.Color(255, 255, 150));
                a_block.show();
              }
          }
        }
      }else {
        if(lastFloor == "1"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(171, a_block.Color(255, 255, 150));
            a_block.show();
        }else if(lastFloor == "2"){
          a_block.setBrightness(bright);
          a_block.setPixelColor(177, a_block.Color(255, 255, 150));
          a_block.show();
        }else if(lastFloor == "3"){
          a_block.setBrightness(bright);
          a_block.setPixelColor(183, a_block.Color(255, 255, 150));
          a_block.show();
        }else if(lastFloor == "4"){
          a_block.setBrightness(bright);
          a_block.setPixelColor(183+6, a_block.Color(255, 255, 150));
          a_block.show();
        }else if(lastFloor == "5"){
          a_block.setBrightness(bright);
          a_block.setPixelColor(183+6+6, a_block.Color(255, 255, 150));
          a_block.show();
        }else if(lastFloor == "6"){
          a_block.setBrightness(bright);
          a_block.setPixelColor(183+6+6+6, a_block.Color(255, 255, 150));
          a_block.show();
        }else if(lastFloor == "7"){
          a_block.setBrightness(bright);
          a_block.setPixelColor(183+6+6+6+6, a_block.Color(255, 255, 150));
          a_block.show();
        }else if(lastFloor == "8"){
          a_block.setBrightness(bright);
          a_block.setPixelColor(183+6+6+6+6+6, a_block.Color(255, 255, 150));
          a_block.show();
        }else if(lastFloor == "9"){
          a_block.setBrightness(bright);
          a_block.setPixelColor(183+6+6+6+6+6+6, a_block.Color(255, 255, 150));
          a_block.show();
        }else if(lastFloor == "10"){
          a_block.setBrightness(bright);
          a_block.setPixelColor(183+6+6+6+6+6+6+6, a_block.Color(255, 255, 150));
          a_block.show();
        }else if(lastFloor == "11"){
          a_block.setBrightness(bright);
          a_block.setPixelColor(183+6+6+6+6+6+6+6+6, a_block.Color(255, 255, 150));
          a_block.show();
        }else if(lastFloor == "12"){
          a_block.setBrightness(bright);
          a_block.setPixelColor(183+6+6+6+6+6+6+6+6+6, a_block.Color(255, 255, 150));
          a_block.show();
        }else if(lastFloor == "13"){
          a_block.setBrightness(bright);
          a_block.setPixelColor(183+6+6+6+6+6+6+6+6+6+6, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }
      break;
    case '6':
      a_block.clear();
      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          if(lastFloor == "1"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(3, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "2"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(9, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "3"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(15, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "4"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(21, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "5"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(27, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "6"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(33, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "7"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(39, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "8"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(45, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "9"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(51, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "10"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(57, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "11"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(63, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "12"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(69, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "13"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(75, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else{
          if(lastFloor == "1"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(81, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "2"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(88, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "3"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(95, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "4"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(102, a_block.Color(255, 255, 150));
            a_block.show();
         
          }else if(lastFloor == "5"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(109, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "6"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(116, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "7"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(123, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "8"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(130, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "9"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(137, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "10"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(144, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "11"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(151, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "12"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(158, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "13"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(165, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }else {
        if(lastFloor == "1"){
          a_block.setBrightness(bright);
          a_block.setPixelColor(172, a_block.Color(255, 255, 150));
          a_block.show();
        }else if(lastFloor == "2"){
          a_block.setBrightness(bright);
          a_block.setPixelColor(172+6, a_block.Color(255, 255, 150));
          a_block.show();
        }else if(lastFloor == "3"){
          a_block.setBrightness(bright);
          a_block.setPixelColor(172+6+6, a_block.Color(255, 255, 150));
          a_block.show();
        }else if(lastFloor == "4"){
          a_block.setBrightness(bright);
          a_block.setPixelColor(172+6+6+6, a_block.Color(255, 255, 150));
          a_block.show();
        }else if(lastFloor == "5"){
          a_block.setBrightness(bright);
          a_block.setPixelColor(172+6+6+6+6, a_block.Color(255, 255, 150));
          a_block.show();
        }else if(lastFloor == "6"){
          a_block.setBrightness(bright);
          a_block.setPixelColor(172+6+6+6+6+6, a_block.Color(255, 255, 150));
          a_block.show();
        }else if(lastFloor == "7"){
          a_block.setBrightness(bright);
          a_block.setPixelColor(172+6+6+6+6+6+6, a_block.Color(255, 255, 150));
          a_block.show();
        }else if(lastFloor == "8"){
          a_block.setBrightness(bright);
          a_block.setPixelColor(172+6+6+6+6+6+6+6, a_block.Color(255, 255, 150));
          a_block.show();
        }else if(lastFloor == "9"){
          a_block.setBrightness(bright);
          a_block.setPixelColor(172+6+6+6+6+6+6+6+6, a_block.Color(255, 255, 150));
          a_block.show();
        }else if(lastFloor == "10"){
          a_block.setBrightness(bright);
          a_block.setPixelColor(172+6+6+6+6+6+6+6+6+6, a_block.Color(255, 255, 150));
          a_block.show();
        }else if(lastFloor == "11"){
          a_block.setBrightness(bright);
          a_block.setPixelColor(172+6+6+6+6+6+6+6+6+6+6, a_block.Color(255, 255, 150));
          a_block.show();
        }else if(lastFloor == "12"){
          a_block.setBrightness(bright);
          a_block.setPixelColor(172+6+6+6+6+6+6+6+6+6+6+6, a_block.Color(255, 255, 150));
          a_block.show();
        }else if(lastFloor == "13"){
          a_block.setBrightness(bright);
          a_block.setPixelColor(172+6+6+6+6+6+6+6+6+6+6+6+6, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }
      break;
    case '7':
      a_block.clear();
      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          if(lastFloor == "1"){
            for (int i = 4; i < 6; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "2"){
            for (int i = 10; i < 12; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "3"){
            for (int i = 16; i < 18; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "4"){
            for (int i = 22; i < 24; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "5"){
            for (int i = 28; i < 30; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "6"){
            for (int i = 34; i < 36; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "7"){
            for (int i = 40; i < 42; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "8"){
            for (int i = 46; i < 48; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "9"){
            for (int i = 52; i < 54; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "10"){
            for (int i = 58; i < 60; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "11"){
            for (int i = 64; i < 66; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "12"){
            for (int i = 70; i < 72; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "13"){
            for (int i = 76; i < 78; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }
        }else{
          if(lastFloor == "1"){
            for (int i = 82; i < 85; i++){
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "2"){
            for (int i = 89; i < 92; i++){
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "3"){
            for (int i = 96; i < 99; i++){
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "4"){
            for (int i = 103; i < 106; i++){
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "5"){
            for (int i = 110; i < 113; i++){
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "6"){
            for (int i = 117; i < 120; i++){
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "7"){
            for (int i = 124; i < 127; i++){
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "8"){
            for (int i = 131; i < 134; i++){
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "9"){
            for (int i = 138; i < 141; i++){
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "10"){
            for (int i = 145; i < 148; i++){
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "11"){
            for (int i = 152; i < 155; i++){
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "12"){
            for (int i = 158; i < 161; i++){
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "13"){
            for (int i = 165; i < 168; i++){
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }
        }
      }else{
        if(lastFloor == "1"){
          for(int i = 172+1; i < 174+1; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "2"){
          for(int i = 172+1+6; i < 174+1+6; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "3"){
          for(int i = 172+1+6+6; i < 174+1+6+6; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "4"){
          for(int i = 172+1+6+6+6; i < 174+1+6+6+6; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "5"){
          for(int i = 172+1+6+6+6+6; i < 174+1+6+6+6+6; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "6"){
          for(int i = 172+1+6+6+6+6+6; i < 174+1+6+6+6+6+6; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "7"){
          for(int i = 172+1+6+6+6+6+6+6; i < 174+1+6+6+6+6+6+6; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "8"){
          for(int i = 172+1+6+6+6+6+6+6+6; i < 174+1+6+6+6+6+6+6+6; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "9"){
          for(int i = 172+1+6+6+6+6+6+6+6+6; i < 174+1+6+6+6+6+6+6+6+6; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "10"){
          for(int i = 172+1+6+6+6+6+6+6+6+6+6; i < 174+1+6+6+6+6+6+6+6+6+6; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "11"){
          for(int i = 172+1+6+6+6+6+6+6+6+6+6+6; i < 174+1+6+6+6+6+6+6+6+6+6+6; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "12"){
          for(int i = 172+1+6+6+6+6+6+6+6+6+6+6+6; i < 174+1+6+6+6+6+6+6+6+6+6+6+6; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "13"){
          for(int i = 172+1+6+6+6+6+6+6+6+6+6+6+6+6; i < 174+1+6+6+6+6+6+6+6+6+6+6+6+6; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }
      break;
    }
  }
}