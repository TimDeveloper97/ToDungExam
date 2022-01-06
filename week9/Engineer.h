#pragma once
#include "Employee.h"

class Engineer : public Employee
{
private:
    string degree;
    string area;
public:
    Engineer();
    Engineer(string name, string id, string gender, double rate, string degree, string area);
    Engineer(Engineer& e);
    string getDegree();
    string getArea();
    void setDegree(string degree);
    void setArea(string area);
    void setAll(string name, string ID, string gender, double rate, 
               double std_hours, double ot_hours, string degree, string area);
    friend ostream& operator<< (ostream& out, Engineer& en);

};


