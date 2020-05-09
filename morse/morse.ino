#include "hotaru.h"

#define x 20 // この数値を大きくすると点灯が遅くなります。

void setup() {
  Serial.begin(115200);
  pinMode(3, OUTPUT);  
}

void loop() {
#if 0
 tontsu("GOLYAT");
 tontsu("DE");
 tontsu("TEDETH");
 tontsu("HRHR");
 tontsu("NR1");
 tontsu("FORTRESS OF TEDETH");
 tontsu("6");
 tontsu("2243");
 tontsu("BT");
 tontsu("FRAING BATTLESHIP GOLYAT");
 tontsu("BT");
 tontsu("AUDIO FIDELITY GULIM");
 tontsu("VA");
#endif

  mo(minasama);
  delay(3000);
}

void tontsu( char *m ){
  int t;
  int i = 0;
  char buf[10],foo;

  Serial.println(m);

  while(*m != 0x00 ){
    t = *m;
    i = 0;
    if ( ( t >= 0x41 ) & ( t <= 0x5a ) )
      t = t - 0x41;
    else if ( ( t>=0x30 ) & (t<=0x39) )
      t = t - 0x30 + 26;
      
    while(morse[t+1][i]!=0x00){
      ton(morse[t+1][i]);
      i++;
    }

    Serial.println("");
    delay(20*x);
    m++;
  }
}
void mo(char *m ){
  while(*m != 0x00 ){
      ton(*m);
      m++;
    }  
}

void ton( char m ){
  switch( m ){
    case  '*':
        Serial.print("*");
        digitalWrite(3, HIGH);
        delay(5*x);
        break;
    case  '-':
        Serial.print("-");
        digitalWrite(3, HIGH);
        delay(15*x);
        break;
    default:
        Serial.print(" ");
        delay(10*x);
        break;
  }
  digitalWrite(3, LOW);
  delay(3*x);
}
