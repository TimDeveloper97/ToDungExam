#include <iostream>
#include "Employee.h"
#include "Engineer.h"
#include "CustomerService.h"

using namespace std;

//For testing purpose only
void printEmployee(Employee e)
{
	cout << e.getName() << " " << e.getID() << " "
		<< e.getGender() << " " << e.getRate()
		<< " " << e.calculateSalary() << endl;
}

int main()
{
	//For testing Employee class
	Employee e1;
	Employee e2("Han", "s10323", "female", 14.5);
	Employee e3(e2);
	e1.setStdHours(30);
	e1.setOTHours(20);
	cout << "Print out the information of the three employees: " << endl;
	printEmployee(e1);
	printEmployee(e2);
	printEmployee(e3);
	cout << "\nSet the information of the last employee and print it out: " << endl;
	e3.setAll("Toan", "s13121", "Male", 21.3, 11.2, 25.5);
	printEmployee(e3);

	//For testing Engineer class
	cout << "\nPrint out the information of the engineer using output stream: " << endl;
	Engineer en1("Han", "s10323", "female", 14.5, "Master", "ML");
	cout << en1;
	cout << "\nSet the information of the engineer and print it out: " << endl;
	en1.setAll("Hai", "v13121", "male", 12.3, 13, 12, "PhD", "Database");
	cout << en1;

	return 0;
}
