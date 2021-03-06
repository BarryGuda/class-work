#include <iostream>
#include <sstream>

using namespace std;

class Employee {
protected:
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


    double grossPay(int hours){
        return pay * hours;
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
        //Function override
        double grossPay(int hours){
            if(salaried){
                return pay;
            }else{
                return pay * hours;
            }
            return pay;
        }
         string toString() {
        stringstream stm;
        string salary;
        if(salaried){
            salary = "Salaried";
        }else{
            salary = "Hourly";
        }
        stm << name << " : " <<pay
            <<" : " << salary <<endl ;
        return stm.str();
    }
};
int main()
{
    Employee emp1("Mary Smith",15.00);
    cout << "Employee name: " << emp1.getName() <<endl;
    cout << "Employee pay rate: " << emp1.getPay() <<endl;
    cout << "Employee Gross Pay: " << emp1.grossPay(30) <<endl;
    Manager emp2("Bob Brown",15.01,true);
    /*cout << "Employee name: " << emp2.getName() <<endl;
    cout << "Employee pay rate: " << emp2.getPay() <<endl;
    cout << "Employee 2 salaried? " << emp2.getSalaried() <<endl;
    cout << "Employee 2 GrossPay : " << emp2.grossPay() <<endl;*/
    cout << emp2.toString() << endl;
    cout << "Employee 2 GrossPay : " << emp2.grossPay(120) <<endl;
    return 0;
}

