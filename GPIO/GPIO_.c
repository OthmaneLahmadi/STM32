#include "GPIO_.h"


void PIN_W(char GPIO,int PIN_){
switch (GPIO){

case 'A':
(*RCC__).RCC_AHB1ENR|=(1<<0);
(*GPIOA__).GPIOx_MODER|=(1U<<(PIN_*2));
(*GPIOA__).GPIOx_MODER&=~(1U<<(PIN_*2+1));
(*GPIOA__).GPIOx_ODR|=(1U<<PIN_);
break;



case 'B':
(*RCC__).RCC_AHB1ENR|=(1<<1);
(*GPIOB__).GPIOx_MODER|=(1U<<(PIN_*2));
(*GPIOB__).GPIOx_MODER&=~(1U<<(PIN_*2+1));
(*GPIOB__).GPIOx_ODR|=(1U<<PIN_);
break;

case 'C':
(*RCC__).RCC_AHB1ENR|=(1<<2);
(*GPIOC__).GPIOx_MODER|=(1U<<(PIN_*2));
(*GPIOC__).GPIOx_MODER&=~(1U<<(PIN_*2+1));
(*GPIOC__).GPIOx_ODR|=(1U<<PIN_);
break;

case 'D':
(*RCC__).RCC_AHB1ENR|=(1<<3);
(*GPIOD__).GPIOx_MODER|=(1U<<(PIN_*2));
(*GPIOD__).GPIOx_MODER&=~(1U<<(PIN_*2+1));
(*GPIOD__).GPIOx_ODR|=(1U<<PIN_);
break;

case 'E':
(*RCC__).RCC_AHB1ENR|=(1<<4);
(*GPIOE__).GPIOx_MODER|=(1U<<(PIN_*2));
(*GPIOE__).GPIOx_MODER&=~(1U<<(PIN_*2+1));
(*GPIOE__).GPIOx_ODR|=(1U<<PIN_);
break;

case 'F':
(*RCC__).RCC_AHB1ENR|=(1<<5);
(*GPIOF__).GPIOx_MODER|=(1U<<(PIN_*2));
(*GPIOF__).GPIOx_MODER&=~(1U<<(PIN_*2+1));
(*GPIOF__).GPIOx_ODR|=(1U<<PIN_);
break;

case 'G':
(*RCC__).RCC_AHB1ENR|=(1<<6);
(*GPIOG__).GPIOx_MODER|=(1U<<(PIN_*2));
(*GPIOG__).GPIOx_MODER&=~(1U<<(PIN_*2+1));
(*GPIOG__).GPIOx_ODR|=(1U<<PIN_);
break;

case 'H':
(*RCC__).RCC_AHB1ENR|=(1<<7);
(*GPIOH__).GPIOx_MODER|=(1U<<(PIN_*2));
(*GPIOH__).GPIOx_MODER&=~(1U<<(PIN_*2+1));
(*GPIOH__).GPIOx_ODR|=(1U<<PIN_);
break;

case 'I':
(*RCC__).RCC_AHB1ENR|=(1<<8);
(*GPIOI__).GPIOx_MODER|=(1U<<(PIN_*2));
(*GPIOI__).GPIOx_MODER&=~(1U<<(PIN_*2+1));
(*GPIOI__).GPIOx_ODR|=(1U<<PIN_);
break;

case 'J':
(*RCC__).RCC_AHB1ENR|=(1<<9);
(*GPIOJ__).GPIOx_MODER|=(1U<<(PIN_*2));
(*GPIOJ__).GPIOx_MODER&=~(1U<<(PIN_*2+1));
(*GPIOJ__).GPIOx_ODR|=(1U<<PIN_);
break;

case 'K':
(*RCC__).RCC_AHB1ENR|=(1<<10);
(*GPIOK__).GPIOx_MODER|=(1U<<(PIN_*2));
(*GPIOK__).GPIOx_MODER&=~(1U<<(PIN_*2+1));
(*GPIOK__).GPIOx_ODR|=(1U<<PIN_);
break;
default:
break;
}

}