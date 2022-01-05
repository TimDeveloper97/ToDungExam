#include<iostream>
#include<string>
using namespace std;
enum job
{
    fulltime = 1,
    pasttime = 2,
    casual = 3,
};

class Employee
{
protected:
    string name;
    string id;
    string gender;
    double rate;
    double std_hours;
    double ot_hours;
    job type;

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
    job getJob();

    //Setters
    void setName(string name);
    void setID(string ID);
    void setGender(string gender);
    void setRate(double rate);
    void setStdHours(double hours);
    void setOTHours(double hours);
    void setJob(job j);
    void setAll(string name, string ID, string gender, double rate, double std_hours, double ot_hours);

    double calculateSalary();
};
Employee::Employee()
{
    this->name = "Anthony";
    this->id = "v15874";
    this->gender = "Male";
    this->rate = 12.5;
    this->std_hours = 0;
    this->ot_hours = 0;
    this->type = fulltime;
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
    this->type = e.getJob();
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
job Employee::getJob()
{
    return this->type;
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
void Employee::setJob(job j)
{
    this->type = j;
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
    return std_hours * rate * type + ot_hours * 2 * rate;
}

//For testing purpose only
void printEmployee(Employee e)
{
    cout << e.getName() << " " << e.getID() << " " << e.getGender() << " " << e.getRate() << " " << e.calculateSalary() << endl;
}


class Engineer : public Employee
{
private:
    string degree;
    string area;
public:
    friend ostream& operator << (ostream& out, Engineer& e);
    Engineer();
    Engineer(string name, string id, string gender, double rate, string degree, string area);
    Engineer(Engineer& e);
    string getDegree();
    string getArea();
    void setDegree(string degree);
    void setArea(string area);
    void setAll(string name, string ID, string gender, double rate, double std_hours, double ot_hours, string degree, string area);
};

Engineer::Engineer()
{
    this->name = "Anthony";
    this->id = "v15874";
    this->gender = "Male";
    this->rate = 12.5;
    this->std_hours = 0;
    this->ot_hours = 0;
    this->degree = "Master";
    this->area = "Networking";
}
Engineer::Engineer(string name, string id, string gender, double rate, string degree, string area)
{
    this->name = name;
    this->id = id;
    this->gender = gender;
    this->rate = rate;
    this->std_hours = 0;
    this->ot_hours = 0;
    this->degree = degree;
    this->area = area;
}
Engineer::Engineer(Engineer& e)
{
    this->name = e.getName();
    this->id = e.getID();
    this->gender = e.getGender();
    this->rate = e.getRate();
    this->std_hours = e.getStdHours();
    this->ot_hours = e.getOTHours();
    this->degree = e.getDegree();
    this->area = e.getArea();
}
string Engineer::getDegree()
{
    return this->degree;
}
string Engineer::getArea()
{
    return this->area;
}
void Engineer::setDegree(string degree)
{
    this->degree = degree;
}
void Engineer::setArea(string area)
{
    this->area = area;
}
void Engineer::setAll(string name, string ID, string gender, double rate, double std_hours, double ot_hours, string degree, string area)
{
    this->setName(name);
    this->setID(ID);
    this->setGender(gender);
    this->setRate(rate);
    this->setStdHours(std_hours);
    this->setOTHours(ot_hours);
    this->setDegree(degree);
    this->setArea(area);
}

ostream& operator << (ostream& out, Engineer& e)
{
    out << e.getName() << " " << e.getID() << " " << e.getGender() << " " << e.getRate() << " " << e.calculateSalary() << " " << e.getDegree() << " " << e.getArea() << endl;
    return out;
}

class CustomerService : public Employee
{
private:
    string contract;
public:
    friend ostream& operator << (ostream& out, CustomerService& cs);
    CustomerService();
    CustomerService(string name, string id, string gender, double rate, string contract);
    CustomerService(CustomerService& e);
    string getContract();
    void setContract(string degree);
    void setAll(string name, string ID, string gender, double rate, double std_hours, double ot_hours, string contract);
};

CustomerService::CustomerService()
{
    this->name = "Anthony";
    this->id = "v15874";
    this->gender = "Male";
    this->rate = 12.5;
    this->std_hours = 0;
    this->ot_hours = 0;
    this->contract = "part_time";
}
CustomerService::CustomerService(string name, string id, string gender, double rate, string contract)
{
    this->name = name;
    this->id = id;
    this->gender = gender;
    this->rate = rate;
    this->std_hours = 0;
    this->ot_hours = 0;
    this->contract = contract;
}
CustomerService::CustomerService(CustomerService& e)
{
    this->name = e.getName();
    this->id = e.getID();
    this->gender = e.getGender();
    this->rate = e.getRate();
    this->std_hours = e.getStdHours();
    this->ot_hours = e.getOTHours();
    this->contract = e.getContract();
}
string CustomerService::getContract()
{
    return this->contract;
}
void CustomerService::setContract(string contract)
{
    this->contract = contract;
}

void CustomerService::setAll(string name, string ID, string gender, double rate, double std_hours, double ot_hours, string contract)
{
    this->setName(name);
    this->setID(ID);
    this->setGender(gender);
    this->setRate(rate);
    this->setStdHours(std_hours);
    this->setOTHours(ot_hours);
    this->setContract(contract);
}
ostream& operator << (ostream& out, CustomerService& cs)
{
    out << cs.getName() << " " << cs.getID() << " " << cs.getGender() << " " << cs.getRate() << " " << cs.calculateSalary() << " " << cs.getContract() << endl;
    return out;
}

//Driver to test
int main()
{
    //For testing Employee class
    Employee e1;
    Employee e2("Han", "s10323", "female", 14.5);
    Employee e3(e2);
    e1.setStdHours(30);
    cout << "salary: " << e1.calculateSalary();
    //e1.setOTHours(20);
    //cout << "Print out the information of the three employees: " << endl;
    //printEmployee(e1);
    //printEmployee(e2);
    //printEmployee(e3);
    //cout << "\nSet the information of the last employee and print it out: " << endl;
    //e3.setAll("Toan", "s13121", "Male", 21.3, 11.2, 25.5);
    //printEmployee(e3);

    ////For testing Engineering class
    //cout << "\nPrint out the information of the engineer using output stream: " << endl;
    //Engineer en1("Han", "s10323", "female", 14.5, "Master", "ML");
    //cout << en1;
    //cout << "\nSet the information of the engineer and print it out: " << endl;
    //en1.setAll("Hai", "v13121", "male", 12.3, 13, 12, "PhD", "Database");
    //cout << en1;

    ////For testing CustomerService class
    //cout << "\nPrint out the information of the CS using output stream: " << endl;
    //CustomerService cs1("Anna", "s52321", "female", 13.5, "full_time");
    //cout << cs1;
    //cout << "\nSet the information of the CS and print it out: " << endl;
    //cs1.setAll("Lily", "v23121", "female", 14.3, 20.5, 30, "part_time");
    //cout << cs1;
    return 0;
}
