#pragma once
#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
	string name;
	string id;
	string gender;
	double rate;
	double std_hours;
	double ot_hours;
public:
	Employee(); //default
	Employee(string name, string id, string gender, double rate); //parameterized 
	Employee(Employee& e); //copy
	//Getters
	string getName();
	string getID();
	string getGender();
	double getRate();
	double getStdHours();
	double getOTHours();
	//Setters
	void setName(string name);
	void setID(string ID);
	void setGender(string gender);
	void setRate(double rate);
	void setStdHours(double hours);
	void setOTHours(double hours);
	void setAll(string name, string ID, string gender, double rate, double std_hours, double ot_hours);

	double calculateSalary();
};