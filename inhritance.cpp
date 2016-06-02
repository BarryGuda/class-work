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

int main(){
//base class plus object.
    Employee emp1("Daisy Guda" ,40000);
    Employee emp2("Ivyonne Paise" ,67000);
    cout << emp1.toString() << endl;
    cout << emp2.toString() << endl;
    return 0;
};
