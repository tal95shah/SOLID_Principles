#include<iostream>
#include<string>
using namespace std;

class Employee{
    private:
        static int counter;
        string name;
        double salary;
    public:
    Employee(string name, double salary){
        counter++;
        this->name = name;
        this->salary = salary;
    }
    double getSalary(){
        return this->salary;
    }
        virtual double calculateBonus() = 0;

};

class PermanentEmployee : Employee{
    public:
        PermanentEmployee(string name, double salary) : Employee{name, salary}{
        }
        double calculateBonus(){
            return 0.50 * this->getSalary();
        }
};

class ContractualEmployee : Employee{
    public:
    ContractualEmployee(string name, double salary) : Employee{name, salary}{
    }
        double calculateBonus(){
            return 0.20 * this->getSalary();
        }
};

int Employee::counter = 0;

int main(){
    PermanentEmployee *permEmp = new PermanentEmployee("Talha", 50000.0);
    ContractualEmployee *contrEmp = new ContractualEmployee("Basit", 50000);
    cout << "Permanent Emp Bonus:" << permEmp ->  calculateBonus() << endl;
    cout << "Contractual Emp Bonus:" << contrEmp ->  calculateBonus() << endl;
    return 0;
}