/*
blink.cpp - Simple example in creating your own Arduino Library
Copyright (c) op from TMM. All right reserved.

*/
/*int ledPin = 3;
void setup (){
pinMode(ledPin,OUTPUT);
}
void loop(){
for (int a=0; a<=255;a++) { //ѭ����䣬����PWM���ȵ�����
analogWrite(ledPin,a);
delay(8); //��ǰ���ȼ���ά�ֵ�ʱ��,��λ����
}
for (int a=255; a>=0;a--) { //ѭ����䣬����PWM���ȼ�С
analogWrite(ledPin,a);
delay(8); //��ǰ���ȵ�ά�ֵ�ʱ��,��λ����
}
}
*/
 
#include <Arduino.h>
#include "Breathe.h"

Breathe::Breathe(int pin){
 pinMode(pin, OUTPUT);
 pinNumber = pin; 
}
 
void Breathe::breathe(bool value){
 if(value == true){
 for(int a = 0; a <= 255; a++){
	 analogWrite(pinNumber, a);
	 delay(8);
 }
 for(int a = 255; a >= 0; a--){
	 analogWrite(pinNumber, a);
	 delay(8);
 }
 }else{
 digitalWrite(pinNumber,LOW);
 }
}

/*void Blink::blink(bool value, int blinkLength ){
 if(value == true){
 digitalWrite(pinNumber,HIGH);
 delay(blinkLength);
 digitalWrite(pinNumber,LOW);
 delay(blinkLength);
 }else{
 digitalWrite(pinNumber,LOW);
 }
}
 
void Blink::blink(bool value, int blinkLength, int blinkLoops){
 if(value == true){
 for(int i=0;i<blinkLoops;i++){
 digitalWrite(pinNumber,HIGH);
 delay(blinkLength);
 digitalWrite(pinNumber,LOW);
 delay(blinkLength);
 }
 }else{
 digitalWrite(pinNumber,LOW);
 }*/