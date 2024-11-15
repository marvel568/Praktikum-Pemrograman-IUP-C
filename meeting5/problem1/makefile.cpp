all:
	g++ -o meeting5a meeting5a.cpp

dump:
	objdump -d meeting5a > meeting5a.asm

clean:
	rm -f meeting5a meeting5a.asm

run: meeting5a
	./meeting5a
