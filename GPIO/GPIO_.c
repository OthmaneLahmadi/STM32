#include "GPIO_.h"
void PIN_W(char GPIO,int PIN_){
switch (GPIO){

case 'A':
RCC_AHB1ENR_BASE|=(1<<0);
GPIOA_MODER|=(1U<<(PIN_*2));
GPIOA_MODER&=~(1U<<(PIN_*2 +1));
GPIOG_OUT|=PIN_;
break;


case 'B':
RCC_AHB1ENR_BASE|=(1<<1);
GPIOB_MODER|=(1U<<(PIN_*2));
GPIOB_MODER&=~(1U<<(PIN_*2 +1));
GPIOB_OUT|=PIN_;
break;

case 'C':
RCC_AHB1ENR_BASE|=(1<<2);
GPIOC_MODER|=(1U<<(PIN_*2));
GPIOC_MODER&=~(1U<<(PIN_*2 +1));
GPIOC_OUT|=PIN_;
break;

case 'D':
RCC_AHB1ENR_BASE|=(1<<3);
GPIOD_MODER|=(1U<<(PIN_*2));
GPIOD_MODER&=~(1U<<(PIN_*2 +1));
GPIOD_OUT|=PIN_;
break;

case 'E':
RCC_AHB1ENR_BASE|=(1<<4);
GPIOE_MODER|=(1U<<(PIN_*2));
GPIOE_MODER&=~(1U<<(PIN_*2 +1));
GPIOE_OUT|=PIN_;
break;

case 'F':
RCC_AHB1ENR_BASE|=(1<<5);
GPIOF_MODER|=(1U<<(PIN_*2));
GPIOF_MODER&=~(1U<<(PIN_*2 +1));
GPIOF_OUT|=PIN_;
break;

case 'G':
RCC_AHB1ENR_BASE|=(1<<6);
GPIOG_MODER|=(1U<<(PIN_*2));
GPIOG_MODER&=~(1U<<(PIN_*2 +1));
GPIOG_OUT|=(1<<PIN_);
break;

case 'H':
RCC_AHB1ENR_BASE|=(1<<7);
GPIOH_MODER|=(1U<<(PIN_*2));
GPIOH_MODER&=~(1U<<(PIN_*2 +1));
GPIOH_OUT|=1<<PIN_;
break;

case 'I':
RCC_AHB1ENR_BASE|=(1<<8);
GPIOI_MODER|=(1U<<(PIN_*2));
GPIOI_MODER&=~(1U<<(PIN_*2 +1));
GPIOI_OUT|=1<<PIN_;
break;

case 'J':
RCC_AHB1ENR_BASE|=(1<<9);
GPIOJ_MODER|=(1U<<(PIN_*2));
GPIOJ_MODER&=~(1U<<(PIN_*2 +1));
GPIOJ_OUT|=1<<PIN_;
break;

case 'K':
RCC_AHB1ENR_BASE|=(1<<10);
GPIOK_MODER|=(1U<<(PIN_*2));
GPIOK_MODER&=~(1U<<(PIN_*2 +1));
GPIOK_OUT|=1<<PIN_;
break;
default:
break;
}

}