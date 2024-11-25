# Target to compile the object file
UASno6: UASno4.o
	g++ UASno4.o -o UASno4.exe

# Target to compile the C++ program
UASno4.o: UASno4.cpp
	g++ -c UASno4.cpp -o UASno4.o

# Target to run the program (interactively)
run: UASno4
	./UASno4.exe

# Target to compile the object Test file
UASno6: UASno4.o
	g++ UASno4.o -o UASno4.exe

# Target to compile the C++ Test program
UASno4.o: UASno4.cpp
	g++ -c UASno4.cpp -o UASno4.o

# Target to run the Test program
test: UASno4
	./UASno4.exe

# Target to clean up compiled files
clean:
	rm -f UASno4.o UASno4.o UASno4.exe UASno4.exe

all:
	g++ -o UASno4 UASno4.cpp

dump:
	objdump -d UASno4 > UASno4.asm
