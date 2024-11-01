all:
	g++ -o gcd gcd.cpp

dump:
	objdump -d gcd > gcd.asm

clean:
	rm -f gcd gcd.asm

run: gcd
	./gcd
