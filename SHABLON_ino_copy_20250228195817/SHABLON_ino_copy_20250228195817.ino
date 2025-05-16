//-слэш - разрез /слэш в гору \слэш с горы
//Маркеры памяти
//void - пустота - космос - ничего - не использует память
//int  - интеджер - целое - память для чисел 12345
//char - символы - буквы
//long - для всего
//------setup - Название
//------() - круглые скобки (SHIFT+9, SHIFT+0) настройки
//------{} - фигурные скобки (SHIFT+Х, SHIFT+Ъ) Начало и конец
//Сложных приказов
// способности  
// вверх


// 2-числа clk
// 3г-числа- dio
// 4-кнопка
// 5-звук
// 6-матрица

#include "TM1637Display.h"
TM1637Display display(3, 2);  // CLC, DIO
int c;
const uint8_t c = { SEG_G | SEG_E | SEG_D // c };
//---------------------------------------------

const int pinButton = 8;


void vverh (){

}
// ввниз
void  vniz(){

}

// проверить кнопку
 void knop (){
  int stateButton = digitalRead(pinButton);
    Serial.println(stateButton);
    delay(20);
}

// зажигать пиксель
  void pix(){
// убрать все пиксели = очистить
 void ochist(){
// пищать
void pisk(){
  digitalWrite(3, 1);
  delay(500);
  digitalWrite(3, 0);
  delay(500);
}

void knop(){  
    int stateButton = digitalRead(pinButton);
    Serial.println(stateButton);
    delay(20);
}


// показаьть число на tm1637
void schet(){
  c = analogRead(A1);
  Serial.println(c);
  display.showNumberDec(c, false, 3, 0);
  display.setSegments(c, 1, 3);
  delay(500);
}

void setup() {  
  pinMode(3, OUTPUT);
//---------------------------

Serial.begin(9600);
  pinMode(A1, INPUT);
  display.setBrightness(4);  // яркость от 0 до 7, true/false
  display.clear();
  //--------------------
     pinMode(pinButton, INPUT);
    Serial.begin(9600);
}
void loop() {
  
}

  
