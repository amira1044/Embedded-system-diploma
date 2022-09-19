//c startup cortex-m3
//Eng.Amira Khaled

#include "stdint.h"

extern int main();
extern unsigned int _stack_top;
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
void MM_Fault_Handler(void)__attribute__((weak,alias("Default_Handler")));;
void Bus_Fault(void)__attribute__((weak,alias("Default_Handler")));;
void Usage_Fault_Handler(void)__attribute__((weak,alias("Default_Handler")));;


uint32_t vectors[]__attribute__((section(".vectors")))=
{
	(uint32_t) &_stack_top,
	(uint32_t) &Reset_Handler,
	(uint32_t) &NMI_Handler,
	(uint32_t) &H_Fault_Handler,
	(uint32_t) &MM_Fault_Handler,
	(uint32_t) &Bus_Fault,
	(uint32_t) &Usage_Fault_Handler,
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