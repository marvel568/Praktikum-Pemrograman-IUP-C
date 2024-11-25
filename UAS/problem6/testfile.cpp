# Target to compile the object file
finalexam_problem1: finalexam_problem1.o
	g++ finalexam_problem1.o -o finalexam_problem1.exe

# Target to compile the C++ program
finalexam_problem1.o: finalexam_problem1.cpp
	g++ -c finalexam_problem1.cpp -o finalexam_problem1.o

# Target to run the program (interactively)
run: finalexam_problem1
	./finalexam_problem1.exe

# Target to compile the object Test file
finalexam_problem1_test: finalexam_problem1_test.o
	g++ finalexam_problem1_test.o -o finalexam_problem1_test.exe

# Target to compile the C++ Test program
finalexam_problem1_test.o: finalexam_problem1_test.cpp
	g++ -c finalexam_problem1_test.cpp -o finalexam_problem1_test.o

# Target to run the Test program
test: finalexam_problem1_test
	./finalexam_problem1_test.exe

# Target to clean up compiled files
clean:
	rm -f finalexam_problem1.o finalexam_problem1_test.o finalexam_problem1.exe finalexam_problem1_test.exe

all:
	g++ -o finalexam_problem1 finalexam_problem1.cpp

dump:
	objdump -d finalexam_problem1 > finalexam_problem1.asm
