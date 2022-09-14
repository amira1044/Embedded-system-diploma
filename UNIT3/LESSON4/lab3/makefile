#makefile prepared by Eng.Amira khaled
CC=arm-none-eabi-
CFLAGS=-mcpu=cortex-m4  -gdwarf-2 -g
INCS=-I .
LIB=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS=$(wildcard *.s)
ASOBJ=$(AS:.s=.o)
PROJECT_NAME=Unit3_lab4_cortex-m4

all:$(PROJECT_NAME).bin
	@echo "Build is done"

%.o:%.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@	
$(PROJECT_NAME).elf:$(OBJ) $(ASOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIB) $(OBJ) $(ASOBJ) -o  $(PROJECT_NAME).elf -Map=output.map
	cp $(PROJECT_NAME).elf $(PROJECT_NAME).axf

$(PROJECT_NAME).bin:$(PROJECT_NAME).elf
	$(CC)objcopy.exe -O binary $< $@
clean:
	rm *.elf *.bin
	@echo "Remove is done"
clean_all:
	rm *.o *.elf *.bin
	@echo "Remove is done"
