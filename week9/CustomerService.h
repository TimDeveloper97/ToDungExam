#pragma once
#include "Employee.h"

class CustomerService : public Employee
{
private:
    string contract;
public:
    CustomerService();
    CustomerService(string name, string id, string gender, double rate, string contract);
    CustomerService(CustomerService& e);
    string getContract();
    void setContract(string degree);
    void setAll(string name, string ID, string gender, double rate, double std_hours,
        double ot_hours, string contract);
};



