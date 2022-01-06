#include "Engineer.h"
using namespace std;

Engineer::Engineer() : Employee() {
    this->degree = "diploma";
    this->area = "web";
}

Engineer::Engineer(string name, string id, string gender, double rate, string degree, string area)
    : Employee(name, id, gender, rate) {
    this->degree = degree;
    this->area = area;
}
Engineer::Engineer(Engineer& e) : Employee(e) {
    this->degree = e.degree;
    this->area = e.area;
}
string Engineer::getDegree() {
    return this->degree;
}
string Engineer::getArea() {
    return this->area;
}
void Engineer::setDegree(string degree) {
    this->degree = degree;
}
void Engineer::setArea(string area) {
    this->area = area;
}
void Engineer::setAll(string name, string ID, string gender, double rate,
    double std_hours, double ot_hours, string degree, string area) {
    // invoke the parent class's implementation to set some attributes of Engineer
    Employee::setAll(name, ID, gender, rate, std_hours, ot_hours);
    this->setDegree(degree);
    this->setArea(area);
}

ostream& operator<< (ostream& out, Engineer& e) {
    out << e.getName() << " " << e.getID() << " "
        << e.getGender() << " " << e.getRate()
        << e.getDegree() << " " << e.getArea()
        << " " << e.calculateSalary() << endl;
    return out;
}