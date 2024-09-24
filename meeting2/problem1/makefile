all: salary_calculation

salary_calculation:
	g++ -o salary_calculation salary_calculation.cpp testmeeting2problem1.cpp

dump:
	objdump -d salary_calculation > salary_calculation.asm

clean:
	rm -f salary_calculation.o salary_calculation testmeeting2problem1.o testmeeting2problem1

run_salary: salary_calculation
	./salary_calculation
