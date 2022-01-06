#include "CustomerService.h"

CustomerService::CustomerService() : Employee() {
    this->contract = "part time";
}

CustomerService::CustomerService(string name, string id, string gender,
    double rate, string contract)
    : Employee(name, id, gender, rate)
{
    this->contract = contract;
}
CustomerService::CustomerService(CustomerService& e) : Employee(e) {
    this->contract = e.contract;
}
string CustomerService::getContract() {
    return this->contract;
}
void CustomerService::setContract(string contract) {
    this->contract = contract;
}
void CustomerService::setAll(string name, string ID, string gender, double rate,
    double std_hours, double ot_hours, string contract)
{
    Employee::setAll(name, ID, gender, rate, std_hours, ot_hours);
    this->contract = contract;
}