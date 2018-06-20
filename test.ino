#include <Wire.h>                 // Wire 라이브러리를 포함
#include <AM2320.h>          // AM2320 라이브러리를 포함
AM2320 th;                          // AM2320 선언     
const int gasPin = A0;

void setup() {
  Serial.begin(9600);              // 시리얼 통신 시작
}

void loop() {
  th.Read();                                       // AM2320 읽기
  Serial.print("gas:");
  Serial.println(analogRead(gasPin));      //가스값 출력
  Serial.print("humidity: ");                // 시리얼 모니터에 humidity 출력
  Serial.print(th.h);                            // 시리얼 모니터에 습도값(h) 출력
  Serial.print("%, temperature: ");     // 시리얼 모니터에 temperature 출력
  Serial.print(th.t);                             // 시리얼 모니터에 온도값(t) 출력
  Serial.println("C");
  delay(1000);                                   // 1초 딜레이
}
