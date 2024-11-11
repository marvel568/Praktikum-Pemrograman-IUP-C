all:
	g++ -o meeting4a meeting4a.cpp

dump:
	objdump -d meeting4a > meeting4a.asm

clean:
	rm -f meeting4a meeting4a.asm

run: meeting4a
	./meeting4a
