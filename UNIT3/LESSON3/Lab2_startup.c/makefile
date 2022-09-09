#makefile prepared by Eng.Amira khaled
CC=arm-none-eabi-
CFLAGS=-mcpu=cortex-m3  -gdwarf-2
INCS=-I .
LIB=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS=$(wildcard *.s)
ASOBJ=$(AS:.s=.o)
PROJECT_NAME=learn-in-depth-cortex-m3

all:$(PROJECT_NAME).bin
	@echo "Build is done"

%.o:%.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@	
$(PROJECT_NAME).elf:$(OBJ) $(ASOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIB) $(OBJ) $(ASOBJ) -o  $(PROJECT_NAME).elf -Map=output.map
$(PROJECT_NAME).bin:$(PROJECT_NAME).elf
	$(CC)objcopy.exe -O binary $< $@
clean:
	rm *.elf *.bin
	@echo "Remove is done"
clean_all:
	rm *.o *.elf *.bin
	@echo "Remove is done"
