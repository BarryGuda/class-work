#include <iostream>
#include <sstream>

using namespace std;

class Employee {
private:
    string name;
    double pay;
public:
    Employee() {
        name = "";
        pay = 0;
    }
    Employee(string empName, double payRate){
        name = empName;
        pay = payRate;
    }
    string getName() {
        return name;
    }
    void setName(string empName) {
        name = empName;
    }
    double getPay() {
        return pay;
    }
    void setPay(double payRate) {
        pay = payRate;
    }
    string toString() {
        stringstream stm;
        stm << name << ": " <<pay;
        return stm.str();
    }
};
//derived class  base class
class Manager : public Employee {
private:
    bool salaried;
public:
    Manager(string name, double payRate, bool isSalaried)
        :Employee(name, payRate)
        {
            salaried = isSalaried;
        }
        bool getSalaried() {
            return salaried;
        }
};
int main()
{
    Employee emp1("Mary Smith",15.00);
    cout << "Employee name: " << emp1.getName() <<endl;
    cout << "Employee pay rate: " << emp1.getPay() <<endl;
    Manager emp2("Bob Brown",15.01,true);
    cout << "Employee name: " << emp2.getName() <<endl;
    cout << "Employee pay rate: " << emp2.getPay() <<endl;
    cout << "Employee 2 salaried? " << emp2.getSalaried() <<endl;
    return 0;
}

