#include "GPIO_.h"

void __A(int PIN_,int value){
(*RCC__).RCC_AHB1ENR|=(1U<<0);
(*GPIOA__).GPIOx_MODER|=(1U<<(PIN_*2));
(*GPIOA__).GPIOx_MODER&=~(1U<<(PIN_*2+1));
if(value)(*GPIOA__).GPIOx_ODR|=(1U<<PIN_);
else (*GPIOA__).GPIOx_ODR&=~(1U<<PIN_);
}

void __B(int PIN_,int value){
(*RCC__).RCC_AHB1ENR|=(1U<<1);
(*GPIOB__).GPIOx_MODER|=(1U<<(PIN_*2));
(*GPIOB__).GPIOx_MODER&=~(1U<<(PIN_*2+1));
if(value)(*GPIOB__).GPIOx_ODR|=(1U<<PIN_);
else (*GPIOB__).GPIOx_ODR&=~(1U<<PIN_);}

void __C(int PIN_,int value){
(*RCC__).RCC_AHB1ENR|=(1<<2);
(*GPIOC__).GPIOx_MODER|=(1U<<(PIN_*2));
(*GPIOC__).GPIOx_MODER&=~(1U<<(PIN_*2+1));
if(value)(*GPIOC__).GPIOx_ODR|=(1U<<PIN_);
else (*GPIOC__).GPIOx_ODR&=~(1U<<PIN_);}

void __D(int PIN_,int value){
(*RCC__).RCC_AHB1ENR|=(1<<3);
(*GPIOD__).GPIOx_MODER|=(1U<<(PIN_*2));
(*GPIOD__).GPIOx_MODER&=~(1U<<(PIN_*2+1));
if(value)(*GPIOD__).GPIOx_ODR|=(1U<<PIN_);
else (*GPIOD__).GPIOx_ODR&=~(1U<<PIN_);
}


void __E(int PIN_,int value){
(*RCC__).RCC_AHB1ENR|=(1<<4);
(*GPIOE__).GPIOx_MODER|=(1U<<(PIN_*2));
(*GPIOE__).GPIOx_MODER&=~(1U<<(PIN_*2+1));
if(value)(*GPIOE__).GPIOx_ODR|=(1U<<PIN_);
else (*GPIOE__).GPIOx_ODR&=~(1U<<PIN_);}

void __F(int PIN_,int value){
(*RCC__).RCC_AHB1ENR|=(1<<5);
(*GPIOF__).GPIOx_MODER|=(1U<<(PIN_*2));
(*GPIOF__).GPIOx_MODER&=~(1U<<(PIN_*2+1));
if(value)(*GPIOF__).GPIOx_ODR|=(1U<<PIN_);
else (*GPIOF__).GPIOx_ODR&=~(1U<<PIN_);}

void __G(int PIN_,int value){
(*RCC__).RCC_AHB1ENR|=(1<<6);
(*GPIOG__).GPIOx_MODER|=(1U<<(PIN_*2));
(*GPIOG__).GPIOx_MODER&=~(1U<<(PIN_*2+1));
if(value)(*GPIOG__).GPIOx_ODR|=(1U<<PIN_);
else (*GPIOG__).GPIOx_ODR&=~(1U<<PIN_);}

void __H(int PIN_,int value){
(*RCC__).RCC_AHB1ENR|=(1<<7);
(*GPIOH__).GPIOx_MODER|=(1U<<(PIN_*2));
(*GPIOH__).GPIOx_MODER&=~(1U<<(PIN_*2+1));
if(value)(*GPIOH__).GPIOx_ODR|=(1U<<PIN_);
else (*GPIOH__).GPIOx_ODR&=~(1U<<PIN_);}

void __I(int PIN_,int value){
(*RCC__).RCC_AHB1ENR|=(1<<8);
(*GPIOI__).GPIOx_MODER|=(1U<<(PIN_*2));
(*GPIOI__).GPIOx_MODER&=~(1U<<(PIN_*2+1));
if(value)(*GPIOI__).GPIOx_ODR|=(1U<<PIN_);
else (*GPIOI__).GPIOx_ODR&=~(1U<<PIN_);
}

void __J(int PIN_,int value){
(*RCC__).RCC_AHB1ENR|=(1<<9);
(*GPIOJ__).GPIOx_MODER|=(1U<<(PIN_*2));
(*GPIOJ__).GPIOx_MODER&=~(1U<<(PIN_*2+1));
if(value)(*GPIOJ__).GPIOx_ODR|=(1U<<PIN_);
else (*GPIOJ__).GPIOx_ODR&=~(1U<<PIN_);}

void __K(int PIN_,int value){
(*RCC__).RCC_AHB1ENR|=(1<<10);
(*GPIOK__).GPIOx_MODER|=(1U<<(PIN_*2));
(*GPIOK__).GPIOx_MODER&=~(1U<<(PIN_*2+1));
if(value)(*GPIOK__).GPIOx_ODR|=(1U<<PIN_);
else (*GPIOK__).GPIOx_ODR&=~(1U<<PIN_);}


void PIN_set(char GPIO,int PIN_,int data){
switch (GPIO){
case 'A':
__A(PIN_,data);
break;

case 'B':
__B(PIN_,data);
break;

case 'C':
__C(PIN_,data);
break;

case 'D':
__D(PIN_,data);
break;

case 'E':
__E(PIN_,data);
break;

case 'F':
__F(PIN_,data);
break;

case 'G':
__G(PIN_,data);
break;

case 'H':
__H(PIN_,data);
break;

case 'I':
__I(PIN_,data);
break;

case 'J':
__J(PIN_,data);
break;

case 'K':
__K(PIN_,data);
break;
default:
break;
}

}
