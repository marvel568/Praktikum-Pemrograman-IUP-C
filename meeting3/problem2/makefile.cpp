all:
	g++ -o biggestofthethree biggestofthethree.cpp

dump:
	objdump -d biggestofthethree > biggestofthethree.asm

clean:
	rm -f biggestofthethree biggestofthethree.asm

run: quadequationd
	./biggestofthethree
