#include "Employee.h"
#include <string>
using namespace std;

Employee::Employee()
{
	this->name = "Anthony";
	this->id = "v15874";
	this->gender = "Male";
	this->rate = 12.5;
	this->std_hours = 0;
	this->ot_hours = 0;
}
Employee::Employee(string name, string id, string gender, double rate)
{
	this->name = name;
	this->id = id;
	this->gender = gender;
	this->rate = rate;
	this->std_hours = 0;
	this->ot_hours = 0;
}
Employee::Employee(Employee& e)
{
	this->name = e.getName();
	this->id = e.getID();
	this->gender = e.getGender();
	this->rate = e.getRate();
	this->std_hours = e.getStdHours();
	this->ot_hours = e.getOTHours();
}
string Employee::getName()
{
	return this->name;
}
string Employee::getID()
{
	return this->id;
}
string Employee::getGender()
{
	return this->gender;
}
double Employee::getRate()
{
	return this->rate;
}
double Employee::getStdHours()
{
	return this->std_hours;
}
double Employee::getOTHours()
{
	return this->ot_hours;
}
void Employee::setName(string name)
{
	this->name = name;
}
void Employee::setID(string ID)
{
	this->id = ID;
}
void Employee::setGender(string gender)
{
	this->gender = gender;
}
void Employee::setRate(double rate)
{
	this->rate = rate;
}
void Employee::setStdHours(double hours)
{
	this->std_hours = hours;
}
void Employee::setOTHours(double hours)
{
	this->ot_hours = hours;
}
void Employee::setAll(string name, string ID, string gender, double rate, double std_hours, double ot_hours)
{
	this->setName(name);
	this->setID(ID);
	this->setGender(gender);
	this->setRate(rate);
	this->setStdHours(std_hours);
	this->setOTHours(ot_hours);
}
double Employee::calculateSalary()
{
	return std_hours * rate + ot_hours * 2 * rate;
}
