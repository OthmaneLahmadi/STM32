//User LED Green and Red PG13 & PG14
#include <stdint.h>
#define PERIPH_BASE         (0x40000000UL)
#define AHB1_offset         (0x00020000UL) 
#define AHB1_BASE           (PERIPH_BASE + AHB1_offset)
#define GPIOG_offset        (0x1800UL) 
#define GPIOG_BASE          (AHB1_BASE + GPIOG_offset)
#define RCC_offset          (0x3800UL)
#define RCC_BASE            (RCC_offset+AHB1_BASE)
#define AHB1ENR_offset      (0x30U)
#define RCC_AHB1ENR_BASE    (*(volatile unsigned int*)(AHB1ENR_offset+RCC_BASE))

#define Mode_R_offset       (0x00UL)
#define GPIO_R_Mode         (*(volatile unsigned int*)(Mode_R_offset+GPIOG_BASE))

#define OD_R_offset         (0x14UL)
#define GPIOG_Output        (*(volatile unsigned int*)(GPIOG_BASE+OD_R_offset))

#define PIN14               (1U<<14)
#define LED_Red             PIN14
#define PIN13 				(1U<<13)
#define LED_Green			PIN13
#define GPIOGEN             (1U<<6)

#define __IO volatile

typedef struct 
{
__IO uint32_t MODER ;   /*GPIO port mode register (GPIOx_MODER) (x = A..I/J/K)      Address offset: 0x00*/
// __IO uint32_t OTYPER;   /*GPIO port output type register (GPIOx_OTYPER)             Address offset: 0x04*/
// __IO uint32_t OSPEEDR;  /*GPIO port output speed register (GPIOx_OSPEEDR)           Address offset: 0x08*/
// __IO uint32_t PUPDR;    /*GPIO port pull-up/pull-down register (GPIOx_PUPDR)        Address offset: 0x0C*/
// __IO uint32_t IDR;      /*GPIO port input data register (GPIOx_IDR)                 Address offset: 0x10*/
volatile uint32_t DUMMY[4];
__IO uint32_t ODR;      /*GPIO port output data register (GPIOx_ODR)                Address offset: 0x14*/


// __IO uint32_t BSRR;     /*GPIO port bit set/reset register (GPIOx_BSRR)             Address offset: 0x18*/
// __IO uint32_t LCKR;     /*GPIO port configuration lock register (GPIOx_LCKR)        Address offset: 0x1C*/
// __IO uint32_t AFRL;     /*GPIO alternate function low register (GPIOx_AFRL)         Address offset: 0x20*/
// __IO uint32_t AFRH;     /*GPIO alternate function high register (GPIOx_AFRH)        Address offset: 0x24*/
}GPIO_type;

typedef struct
{
volatile uint32_t DUMMY[12];
__IO uint32_t AHB1ENR ;/*RCC AHB1 peripheral clock register  Address offset: 0x30*/
}RCC_type;

#define RCC (RCC_type*)(RCC_BASE)
#define GPIOG (GPIO_type*)(GPIOG_BASE)


int main(){
// RCC_AHB1ENR_BASE|=GPIOGEN;
// GPIO_R_Mode|=(1U<<26)|(1<<28);
// GPIO_R_Mode&=~((1U<<27)|1<<29);

(*RCC).AHB1ENR|=GPIOGEN;
(*GPIOG).MODER|=(1U<<26)|(1<<28);
(*GPIOG).MODER&=~((1U<<27)|1<<29);
while (1)
{
// GPIOG_Output|=(PIN14|PIN13);
(*GPIOG).ODR|=(PIN14|PIN13);

}
    return 0;
}
