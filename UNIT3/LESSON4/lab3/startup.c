//c startup cortex-m3
//Eng.Amira Khaled

#include "stdint.h"


//booking of 1024B located by .bss through uninitialized array of 256 element (256*4b=1024b)
static unsigned long stack_top[256];
extern int main();
extern unsigned int _E_text;
extern unsigned int _S_data;
extern unsigned int _E_data;
extern unsigned int _S_bss;
extern unsigned int _E_bss;

void Reset_Handler(void);
void Default_Handler()
{
	Reset_Handler();
}
void NMI_Handler(void)__attribute__((weak,alias("Default_Handler")));;
void H_Fault_Handler(void)__attribute__((weak,alias("Default_Handler")));;


void (* const v_p_vectors[])()__attribute__((section(".vectors")))=
{
	(void(*)()) ((unsigned long)stack_top+sizeof(stack_top)),
	&Reset_Handler,
	&NMI_Handler,
	&H_Fault_Handler,

};
void Reset_Handler(void)
{
	//copying data from flash to sram
	unsigned int data_size = (unsigned char *)&_E_data - (unsigned char *)&_S_data;
	unsigned char *ptr_src = (unsigned char *)&_E_text;
	unsigned char *ptr_dst = (unsigned char *)&_S_data;
	for(int i=0;i<data_size;i++)
	{
		*((unsigned char*)ptr_dst++)=*((unsigned char*)ptr_src++);
	}
	//init bss at sram with 0
	unsigned int bss_size = (unsigned char *)&_E_bss - (unsigned char *)&_S_bss;
	 *ptr_dst = (unsigned char *)&_S_bss;
	for(int i=0;i<data_size;i++)
	{
		*((unsigned char*)ptr_dst++)=(unsigned char)0;
	}
	//start main
	main();
}