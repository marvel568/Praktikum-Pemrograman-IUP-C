all:
	g++ -o quadequationd quadequationd.cpp

dump:
	objdump -d quadequationd > quadequationd.asm

clean:
	rm -f quadequationd quadequationd.asm

run: quadequationd
	./quadequationd
