all:
	g++ -o project4b project4b.cpp

dump:
	objdump -d project4b > project4b.asm

clean:
	rm -f project4b project4b.asm

run: project4b
	./project4b
