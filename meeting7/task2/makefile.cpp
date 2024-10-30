all:
	g++ -o factorial factorial.cpp

dump:
	objdump -d factorial > factorial.asm

clean:
	rm -f factorial factorial.asm

run: factorial
	./factorial
