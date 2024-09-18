all:
	g++ -o salary_calculation salary_calculation.cpp
dump:
	objdump -d salary_calculation > salary_calculation.asm

clean:
	rm -f salary_calculation.o salary_calculation
run: salary_calculation
	./salary_calculation
