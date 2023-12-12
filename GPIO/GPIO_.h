// @Autor Lahmadi othmane
// GPIO Library v0.1

#include <stdint.h>

#ifndef _GPIO_H
#define _GPIO_H
#define AHB1_BASE         0x40020000UL
#define GPIO_BASE         (AHB1_BASE)

#define GPIO_offset_A     0x00UL
#define GPIO_offset_B     (0x400UL+GPIO_offset_A)
#define GPIO_offset_C     (0x400UL+GPIO_offset_B)
#define GPIO_offset_D     (0x400UL+GPIO_offset_C)
#define GPIO_offset_E     (0x400UL+GPIO_offset_D)
#define GPIO_offset_F     (0x400UL+GPIO_offset_E)
#define GPIO_offset_G     (0x400UL+GPIO_offset_F)
#define GPIO_offset_H     (0x400UL+GPIO_offset_G)
#define GPIO_offset_I     (0x400UL+GPIO_offset_H)
#define GPIO_offset_J     (0x400UL+GPIO_offset_I)
#define GPIO_offset_K     (0x400UL+GPIO_offset_J)

#define GPIOA             (GPIO_BASE+GPIO_offset_A)
#define GPIOB             (GPIO_BASE+GPIO_offset_B)
#define GPIOC             (GPIO_BASE+GPIO_offset_C)
#define GPIOD             (GPIO_BASE+GPIO_offset_D)
#define GPIOE             (GPIO_BASE+GPIO_offset_E)
#define GPIOF             (GPIO_BASE+GPIO_offset_F)
#define GPIOG             (GPIO_BASE+GPIO_offset_G)
#define GPIOH             (GPIO_BASE+GPIO_offset_H)
#define GPIOI             (GPIO_BASE+GPIO_offset_I)
#define GPIOJ             (GPIO_BASE+GPIO_offset_J)
#define GPIOK             (GPIO_BASE+GPIO_offset_K)

#define RCC_offset        (0x3800UL)
#define RCC_BASE          (AHB1_BASE+RCC_offset)


#define RCC_AHB1ENR_offs  (0x30UL)
#define RCC_AHB1ENR_BASE  (*(volatile unsigned int*)(RCC_BASE+RCC_AHB1ENR_offs))

#define GPIOA_MODER       (*(volatile unsigned int*)(GPIOA))
#define GPIOB_MODER       (*(volatile unsigned int*)(GPIOB))
#define GPIOC_MODER       (*(volatile unsigned int*)(GPIOC))
#define GPIOD_MODER       (*(volatile unsigned int*)(GPIOD))
#define GPIOE_MODER       (*(volatile unsigned int*)(GPIOE))
#define GPIOF_MODER       (*(volatile unsigned int*)(GPIOF))
#define GPIOG_MODER       (*(volatile unsigned int*)(GPIOG))
#define GPIOH_MODER       (*(volatile unsigned int*)(GPIOH))
#define GPIOI_MODER       (*(volatile unsigned int*)(GPIOI))
#define GPIOJ_MODER       (*(volatile unsigned int*)(GPIOJ))
#define GPIOK_MODER       (*(volatile unsigned int*)(GPIOK))


#define GPIOA_OUT          (*(volatile unsigned int*)(GPIOA+0x14L))
#define GPIOB_OUT          (*(volatile unsigned int*)(GPIOB+0x14L))
#define GPIOC_OUT          (*(volatile unsigned int*)(GPIOC+0x14L))
#define GPIOD_OUT          (*(volatile unsigned int*)(GPIOD+0x14L))
#define GPIOE_OUT          (*(volatile unsigned int*)(GPIOE+0x14L))
#define GPIOF_OUT          (*(volatile unsigned int*)(GPIOF+0x14L))
#define GPIOG_OUT          (*(volatile unsigned int*)(GPIOG+0x14L))
#define GPIOH_OUT          (*(volatile unsigned int*)(GPIOH+0x14L))
#define GPIOI_OUT          (*(volatile unsigned int*)(GPIOI+0x14L))
#define GPIOJ_OUT          (*(volatile unsigned int*)(GPIOJ+0x14L))
#define GPIOK_OUT          (*(volatile unsigned int*)(GPIOK+0x14L))

#define PIN13              (1U<<13)
#define PIN14              (1U<<14)

#define __IO volatile

typedef struct{
__IO uint32_t DUMMY[12];
__IO uint32_t RCC_AHB1ENR;
}RCC_REGISTER;

typedef struct 
{
__IO uint32_t GPIOx_MODER;
__IO uint32_t DUMMY[4];
__IO uint32_t GPIOx_ODR;
}GPIO_REGISTER;

#define GPIOA__     (GPIO_REGISTER*)(GPIOA)
#define GPIOB__     (GPIO_REGISTER*)(GPIOB)
#define GPIOC__     (GPIO_REGISTER*)(GPIOC)
#define GPIOD__     (GPIO_REGISTER*)(GPIOD)
#define GPIOE__     (GPIO_REGISTER*)(GPIOE)
#define GPIOF__     (GPIO_REGISTER*)(GPIOF)
#define GPIOG__     (GPIO_REGISTER*)(GPIOG)
#define GPIOH__     (GPIO_REGISTER*)(GPIOH)
#define GPIOI__     (GPIO_REGISTER*)(GPIOI)
#define GPIOJ__     (GPIO_REGISTER*)(GPIOJ)
#define GPIOK__     (GPIO_REGISTER*)(GPIOK)

#define RCC__      (RCC_REGISTER*)(RCC_BASE)





void PIN_set(char GPIO,int PIN_,int data);
#endif
