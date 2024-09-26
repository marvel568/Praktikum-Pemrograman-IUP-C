all: quadequationrealorfake

quadequationd: quadequationrealorfake.cpp
	g++ -o quadequationrealorfake quadequationrealorfake.cpp

dump:
	objdump -d quadequationrealorfake > quadequationrealorfake.asm

clean:
	rm -f quadequationrealorfake quadequationrealorfake.asm

run: quadequationrealorfake
	./quadequationrealorfake
