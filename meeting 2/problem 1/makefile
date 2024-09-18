all:
	g++ -o Payslip_Employee Payslip_Employee.cpp

dump:
	objdump -d Payslip_Employee > Payslip_Employee.asm

clean:
	rm -f Payslip_Employee.o Payslip_Employee

run: Payslip_Employee
	./Payslip_Employee
