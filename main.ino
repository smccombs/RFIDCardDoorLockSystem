#include <SoftwareSerial.h>

#define rxPin 8
#define txPin 6

int val = 0; 
int i = 0;
int bytesread = 0; 
int wrong = 0; 

char code[10];
char code1[11] = "XXXXXXXXXX";
char code2[11] = "XXXXXXXXXX";
char code3[11] = "XXXXXXXXXX";
char code4[11] = "XXXXXXXXXX";
char code5[11] = "XXXXXXXXXX";
char code6[11] = "XXXXXXXXXX";
char code7[11] = "XXXXXXXXXX";
char code8[11] = "XXXXXXXXXX";
char code9[11] = "XXXXXXXXXX";
char code10[11] = "XXXXXXXXXX";
char code11[11] = "XXXXXXXXXX";
char code12[11] = "XXXXXXXXXX";
char code13[11] = "XXXXXXXXXX";
char code14[11] = "XXXXXXXXXX";
char code15[11] = "XXXXXXXXXX";
char code16[11] = "XXXXXXXXXX";
char code17[11] = "XXXXXXXXXX";
char code18[11] = "XXXXXXXXXX";
char code19[11] = "XXXXXXXXXX";
char code20[11] = "XXXXXXXXXX";
char code21[11] = "XXXXXXXXXX";
char code22[11] = "XXXXXXXXXX";
char code23[11] = "XXXXXXXXXX";
char code24[11] = "XXXXXXXXXX";
char code25[11] = "XXXXXXXXXX";
char code26[11] = "XXXXXXXXXX";
char code27[11] = "XXXXXXXXXX";
char code28[11] = "XXXXXXXXXX";
char code29[11] = "XXXXXXXXXX";
char code30[11] = "XXXXXXXXXX";
char code31[11] = "XXXXXXXXXX";
char code32[11] = "XXXXXXXXXX";
char code33[11] = "XXXXXXXXXX";
char code34[11] = "XXXXXXXXXX";
char code35[11] = "XXXXXXXXXX";
char code36[11] = "XXXXXXXXXX";
char code37[11] = "XXXXXXXXXX";
char code38[11] = "XXXXXXXXXX";
char code39[11] = "XXXXXXXXXX";
char code40[11] = "XXXXXXXXXX";
char code41[11] = "XXXXXXXXXX";
char code42[11] = "XXXXXXXXXX";
char code43[11] = "XXXXXXXXXX";
char code44[11] = "XXXXXXXXXX";
char code45[11] = "XXXXXXXXXX";
char code46[11] = "XXXXXXXXXX";
char code47[11] = "XXXXXXXXXX";
char code48[11] = "XXXXXXXXXX";
char code49[11] = "XXXXXXXXXX";
char code50[11] = "XXXXXXXXXX";
char code51[11] = "XXXXXXXXXX";
char code52[11] = "XXXXXXXXXX";
char code53[11] = "XXXXXXXXXX";
char code54[11] = "XXXXXXXXXX";
char code55[11] = "XXXXXXXXXX";
char code56[11] = "XXXXXXXXXX";
char code57[11] = "XXXXXXXXXX";
char code58[11] = "XXXXXXXXXX";
char code59[11] = "XXXXXXXXXX";
char code60[11] = "XXXXXXXXXX";
char code61[11] = "XXXXXXXXXX";
char code62[11] = "XXXXXXXXXX";
char code63[11] = "XXXXXXXXXX";
char code64[11] = "XXXXXXXXXX";
char code65[11] = "XXXXXXXXXX";
char code66[11] = "XXXXXXXXXX";
char code67[11] = "XXXXXXXXXX";
char code68[11] = "XXXXXXXXXX";
char code69[11] = "XXXXXXXXXX";
char code70[11] = "XXXXXXXXXX";
char code71[11] = "XXXXXXXXXX";
char code72[11] = "XXXXXXXXXX";
char code73[11] = "XXXXXXXXXX";
char code74[11] = "XXXXXXXXXX";
char code75[11] = "XXXXXXXXXX";
char code76[11] = "XXXXXXXXXX";
char code77[11] = "XXXXXXXXXX";
char code78[11] = "XXXXXXXXXX";
char code79[11] = "XXXXXXXXXX";
char code80[11] = "XXXXXXXXXX";
char code81[11] = "XXXXXXXXXX";
char code82[11] = "XXXXXXXXXX";
char code83[11] = "XXXXXXXXXX";
char code84[11] = "XXXXXXXXXX";
char code85[11] = "XXXXXXXXXX";
char code86[11] = "XXXXXXXXXX";
char code87[11] = "XXXXXXXXXX";
char code88[11] = "XXXXXXXXXX";
char code89[11] = "XXXXXXXXXX";
char code90[11] = "XXXXXXXXXX";
char code91[11] = "XXXXXXXXXX";
char code92[11] = "XXXXXXXXXX";
char code93[11] = "XXXXXXXXXX";
char code94[11] = "XXXXXXXXXX";
char code95[11] = "XXXXXXXXXX";
char code96[11] = "XXXXXXXXXX";
char code97[11] = "XXXXXXXXXX";
char code98[11] = "XXXXXXXXXX";
char code99[11] = "XXXXXXXXXX";
char code100[11] = "XXXXXXXXXX";

int enablePin = 2;
int actionPin = 4;

void setup()  { 
  Serial.begin(9600);

  pinMode(enablePin, OUTPUT);   
  digitalWrite(enablePin, LOW);
  pinMode(actionPin, OUTPUT);   
  digitalWrite(actionPin, LOW);
} 

void loop()  { 
  SoftwareSerial RFID = SoftwareSerial(rxPin,txPin);
  RFID.begin(2400);

  if((val = RFID.read()) == 10) {
    bytesread = 0; 
    while(bytesread<10) { 
      val = RFID.read(); 
      if((val == 10)||(val == 13)) {
        break;                      
      } 
      code[bytesread] = val;         
      bytesread++;                  
    } 
    checkCard();
  }
}

void checkCard()  {
  if(bytesread == 10)  {

    Serial.println(code1);
    Serial.println(code2);
    Serial.println(code3);
    Serial.println(code4);
    Serial.println(code5);
    Serial.println(code6);
    Serial.println(code7);
    Serial.println(code8);
    Serial.println(code9);
    Serial.println(code10);
    Serial.println(code11);
    Serial.println(code12);
    Serial.println(code13);
    Serial.println(code14);
    Serial.println(code15);
    Serial.println(code16);
    Serial.println(code17);
    Serial.println(code18);
    Serial.println(code19);
    Serial.println(code20);
    Serial.println(code21);
    Serial.println(code22);
    Serial.println(code23);
    Serial.println(code24);
    Serial.println(code25);
    Serial.println(code26);
    Serial.println(code27);
    Serial.println(code28);
    Serial.println(code29);
    Serial.println(code30);
    Serial.println(code31);
    Serial.println(code32);
    Serial.println(code33);
    Serial.println(code34);
    Serial.println(code35);
    Serial.println(code36);
    Serial.println(code37);
    Serial.println(code38);
    Serial.println(code39);
    Serial.println(code40);
    Serial.println(code41);
    Serial.println(code42);
    Serial.println(code43);
    Serial.println(code44);
    Serial.println(code45);
    Serial.println(code46);
    Serial.println(code47);
    Serial.println(code48);
    Serial.println(code49);
    Serial.println(code50);
    Serial.println(code51);
    Serial.println(code52);
    Serial.println(code53);
    Serial.println(code54);
    Serial.println(code55);
    Serial.println(code56);
    Serial.println(code57);
    Serial.println(code58);
    Serial.println(code59);
    Serial.println(code60);
    Serial.println(code61);
    Serial.println(code62);
    Serial.println(code63);
    Serial.println(code64);
    Serial.println(code65);
    Serial.println(code66);
    Serial.println(code67);
    Serial.println(code68);
    Serial.println(code69);
    Serial.println(code70);
    Serial.println(code71);
    Serial.println(code72);
    Serial.println(code73);
    Serial.println(code74);
    Serial.println(code75);
    Serial.println(code76);
    Serial.println(code77);
    Serial.println(code78);
    Serial.println(code79);
    Serial.println(code80);
    Serial.println(code81);
    Serial.println(code82);
    Serial.println(code83);
    Serial.println(code84);
    Serial.println(code85);
    Serial.println(code86);
    Serial.println(code87);
    Serial.println(code88);
    Serial.println(code89);
    Serial.println(code90);
    Serial.println(code91);
    Serial.println(code92);
    Serial.println(code93);
    Serial.println(code94);
    Serial.println(code95);
    Serial.println(code96);
    Serial.println(code97);
    Serial.println(code98);
    Serial.println(code99);
    Serial.println(code100);

    Serial.print("Card read: ");
    Serial.println(code);


    i = 0;
    while (i < 99)  {
      if (code[i] == code1[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code2[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code3[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code4[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code5[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }       

    i = 0;
    while (i < 99)  {
      if (code[i] == code6[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }       

    i = 0;
    while (i < 99)  {
      if (code[i] == code7[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code8[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code9[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code10[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code11[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code12[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code13[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code14[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code15[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code16[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code17[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code18[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code19[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code20[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code21[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code22[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code23[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code24[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code25[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code26[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code27[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code28[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code29[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code30[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code31[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code32[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code33[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code34[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code35[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code36[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code37[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code38[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code39[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code40[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code41[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code42[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code43[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code44[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code45[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code46[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code47[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code48[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code49[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code50[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code51[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code52[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code53[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }       

    i = 0;
    while (i < 99)  {
      if (code[i] == code54[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }      

    i = 0;
    while (i < 99)  {
      if (code[i] == code55[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }      

    i = 0;
    while (i < 99)  {
      if (code[i] == code56[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }      

    i = 0;
    while (i < 99)  {
      if (code[i] == code57[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }      

    i = 0;
    while (i < 99)  {
      if (code[i] == code58[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code59[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }      

    i = 0;
    while (i < 99)  {
      if (code[i] == code60[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }      

    i = 0;
    while (i < 99)  {
      if (code[i] == code61[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }      

    i = 0;
    while (i < 99)  {
      if (code[i] == code62[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code63[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }      

    i = 0;
    while (i < 99)  {
      if (code[i] == code64[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }      

    i = 0;
    while (i < 99)  {
      if (code[i] == code65[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }      

    i = 0;
    while (i < 99)  {
      if (code[i] == code66[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code67[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }      

    i = 0;
    while (i < 99)  {
      if (code[i] == code68[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }      

    i = 0;
    while (i < 99)  {
      if (code[i] == code69[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }

    i = 0;
    while (i < 99)  {
      if (code[i] == code70[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }      

    i = 0;
    while (i < 99)  {
      if (code[i] == code71[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }      

    i = 0;
    while (i < 99)  {
      if (code[i] == code72[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    } 

    i = 0;
    while (i < 99)  {
      if (code[i] == code73[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }  

    i = 0;
    while (i < 99)  {
      if (code[i] == code74[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }  

    i = 0;
    while (i < 99)  {
      if (code[i] == code75[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }  

    i = 0;
    while (i < 99)  {
      if (code[i] == code76[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }  

    i = 0;
    while (i < 99)  {
      if (code[i] == code77[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }  

    i = 0;
    while (i < 99)  {
      if (code[i] == code78[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }  

    i = 0;
    while (i < 99)  {
      if (code[i] == code79[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }  

    i = 0;
    while (i < 99)  {
      if (code[i] == code80[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }  

    i = 0;
    while (i < 99)  {
      if (code[i] == code81[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }  

    i = 0;
    while (i < 99)  {
      if (code[i] == code82[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }  

    i = 0;
    while (i < 99)  {
      if (code[i] == code83[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }  

    i = 0;
    while (i < 99)  {
      if (code[i] == code84[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }  

    i = 0;
    while (i < 99)  {
      if (code[i] == code85[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }  

    i = 0;
    while (i < 99)  {
      if (code[i] == code86[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }  

    i = 0;
    while (i < 99)  {
      if (code[i] == code87[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }  

    i = 0;
    while (i < 99)  {
      if (code[i] == code88[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }  

    i = 0;
    while (i < 99)  {
      if (code[i] == code89[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }  

    i = 0;
    while (i < 99)  {
      if (code[i] == code90[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }  

    i = 0;
    while (i < 99)  {
      if (code[i] == code91[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }  

    i = 0;
    while (i < 99)  {
      if (code[i] == code92[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }  

    i = 0;
    while (i < 99)  {
      if (code[i] == code93[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }  

    i = 0;
    while (i < 99)  {
      if (code[i] == code94[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }  

    i = 0;
    while (i < 99)  {
      if (code[i] == code95[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }  

    i = 0;
    while (i < 99)  {
      if (code[i] == code96[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }  

    i = 0;
    while (i < 99)  {
      if (code[i] == code97[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }  

    i = 0;
    while (i < 99)  {
      if (code[i] == code98[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }  

    i = 0;
    while (i < 99)  {
      if (code[i] == code99[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }  

    i = 0;
    while (i < 99)  {
      if (code[i] == code100[i])  {
        i++;
      } 
      else {
        wrong++;
        break;
      }
      if(i == 10) {
        rightCard();
        break;
      }
    }  
    
    if(wrong == 100) {
      wrongCard();
    }
  wrong = 0;
  }
}


void rightCard()  {
  digitalWrite(enablePin, HIGH);

  digitalWrite(actionPin, HIGH);
  delay(5000);
  digitalWrite(actionPin, LOW);

  digitalWrite(enablePin, LOW);
}

void wrongCard()  {
  Serial.print("Wrong Card");
  Serial.println("");
  delay(300);   
  digitalWrite(enablePin, HIGH);
  delay(300);   
  digitalWrite(enablePin, LOW);
  delay(300);   
  digitalWrite(enablePin, HIGH);
  delay(300);   
  digitalWrite(enablePin, LOW);
  delay(300);   
  digitalWrite(enablePin, HIGH);
  delay(300);   
  digitalWrite(enablePin, LOW);
}