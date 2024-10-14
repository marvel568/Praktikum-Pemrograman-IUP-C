ll:
	g++ -o task6 task6.cpp

dump:
	objdump -d task6 > task6.asm

clean:
	rm -f task6 task6.asm

run: task6
	./task6
