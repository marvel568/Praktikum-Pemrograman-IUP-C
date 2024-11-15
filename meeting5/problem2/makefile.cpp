all:
	g++ -o meeting5b meeting5b.cpp

dump:
	objdump -d meeting5b > meeting5b.asm

clean:
	rm -f meeting5b meeting5b.asm

run: meeting5b
	./meeting5b
