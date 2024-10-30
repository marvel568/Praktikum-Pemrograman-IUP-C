all:
	g++ -o functionssub functionssub.cpp

dump:
	objdump -d functionssub > functionssub.asm

clean:
	rm -f functionssub functionssub.asm

run: functionssub
	./functionssub
