all: salary_calculation testfile

salary_calculation:
	g++ -o salary_calculation salary_calculation.cpp

testfile:
	g++ -o testmeeting2problem1 testmeeting2problem1.cpp

dump:
	objdump -d salary_calculation > salary_calculation.asm

clean:
	rm -f salary_calculation.o salary_calculation testfile.o testfile

run_salary: salary_calculation
	./salary_calculation

run_test: testmeeting2problem1
	./testmeeting2problem1
