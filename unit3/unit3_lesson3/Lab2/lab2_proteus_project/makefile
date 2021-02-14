#Prepared by Eng:Boulmane_Taha_Omar
CC=arm-none-eabi-
CFLAGS=-gdwarf-2 -mcpu=cortex-m3 
INCS=-I .
LIBS=
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
AS = $(wildcard  *.s)
ASOBJ = $(AS:.s=.o)
project_name=learn-in-depth-cortex-m3
all: $(project_name).bin
	@echo " ===== (*) all build is done the startup here is in C language !!(*) ======="
%.o: %.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@
%.o: %.s
	$(CC)as.exe $(CFLAGS) $< -o $@
$(project_name).elf: $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T linker_script.ld $(OBJ) $(ASOBJ) $(LIBS) -o $@ -Map=$(Project_name).Map
$(project_name).bin: $(project_name).elf  
	$(CC)objcopy.exe -O binary $< $@
clean_all:
	rm *.o *.elf *.bin
clean:
	rm *.bin *.elf