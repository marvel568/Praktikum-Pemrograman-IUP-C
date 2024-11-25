# Target to compile the object file
UASno6: UASno6.o
	g++ UASno61.o -o UASno6.exe

# Target to compile the C++ program
UASno6.o: UASno6.cpp
	g++ -c UASno6.cpp -o UASno6.o

# Target to run the program (interactively)
run: UASno6
	./UASno6.exe

# Target to compile the object Test file
UASno6: UASno6.o
	g++ UASno6.o -o UASno6.exe

# Target to compile the C++ Test program
UASno6.o: UASno6.cpp
	g++ -c UASno6.cpp -o UASno6.o

# Target to run the Test program
test: UASno6
	./UASno6.exe

# Target to clean up compiled files
clean:
	rm -f UASno6.o UASno6.o UASno6.exe UASno6.exe

all:
	g++ -o UASno6 UASno6.cpp

dump:
	objdump -d UASno6 > UASno6.asm
