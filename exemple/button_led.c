

#define RCC_BASE 0x40023800U
#define RCC_AHB1_EN (*(volatile unsigned int*)(RCC_BASE+0x30))


#define GPIO_BASE (0x40021800U)
#define GPIOx_MODER (*((unsigned volatile int*)(GPIO_BASE)))

#define GPIOx_ODR (*(unsigned volatile int *)(GPIO_BASE+0x14))


#define GPIOA_BASE (0x40020000U)
#define GPIOA_MODER (*(unsigned volatile int*)(0x40020000U))
#define GPIOx_IDR  (*(unsigned volatile int*)(GPIOA_BASE+0x10))

int main(){
	//enable PORTG
	RCC_AHB1_EN |= (1U << 6);
	RCC_AHB1_EN |= (1U<<0);
	//PIN 14 13
	GPIOx_MODER|=(1<<28)|(1<<26);
	GPIOx_MODER&=~(1<<29)|(1<<27);
	GPIOA_MODER&=~(1<<0)|(1<<1);

int x;
while(1){
x=GPIOx_IDR;
if(x&(1<<0)){
GPIOx_ODR|=(1<<14)|(1<<13);
}
else{
GPIOx_ODR&=~((1<<14)|(1<<13));
}

}


	return 0;
}
