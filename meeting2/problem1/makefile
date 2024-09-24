all: salary_calculation

salary_calculation:
	g++ -o salary_calculation salary_calculation.cpp testfile.cpp

dump:
	objdump -d salary_calculation > salary_calculation.asm

clean:
	rm -f salary_calculation.o salary_calculation testfile.o testfile

run_salary: salary_calculation
	./salary_calculation
