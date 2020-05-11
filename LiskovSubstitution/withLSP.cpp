#include<iostream>
#include<string>
#include<vector>
using namespace std;

class IEmployee{
public:
    static int counter_;
    string name;
    int id;
    double salary;
    virtual double getMinimumSalary() = 0;
    virtual void printEmployeeDetails() = 0;
};

int IEmployee::counter_ = 1;

class IEmployeeBonus{
public:
    virtual double calculateBonus() = 0;
};



class Employee: public IEmployee, public IEmployeeBonus{
public:
    virtual void printEmployeeDetails() = 0;
    virtual double calculateBonus() = 0;
    virtual double getMinimumSalary() = 0;
protected:
    string name_;
    int id_;
    double salary_;
    Employee(string name, double salary){
        id_ = IEmployee::counter_++;
        name_ = name;
        salary_ = salary;
    }

};

class PermanentEmployee: public Employee{
public:
    PermanentEmployee(string name, double salary): Employee(name, salary){}
    virtual double calculateBonus(){
        return salary_ * .50;
    }
    virtual double getMinimumSalary(){
        return 35000;
    }
    virtual void printEmployeeDetails(){
        cout << "Permanent Employee:-" << endl;
        cout << "\t" << "ID:\t" << id_ << endl;
        cout << "\t" << "Name:\t" << name_ << endl;
        cout << "\t" << "Salary:\t" << salary_ << endl;
    }
};

class ContractualEmployee: public Employee{
public:
    ContractualEmployee(string name, double salary): Employee(name, salary){}
    virtual double calculateBonus(){
        return salary_ * .20;
    }
    virtual double getMinimumSalary(){
        return 15000;
    }
    virtual void printEmployeeDetails(){
        cout << "Contractual Employee:-" << endl;
        cout << "\t" << "ID:\t" << id_ << endl;
        cout << "\t" << "Name:\t" << name_ << endl;
        cout << "\t" << "Salary:\t" << salary_ << endl;
    }
};

class TemporaryEmployee: public IEmployee{
public:
    TemporaryEmployee(string name, double salary){
        IEmployee::id = IEmployee::counter_++;
        IEmployee::name = name;
        IEmployee::salary = salary;
    }
    virtual double getMinimumSalary(){
        return 5000;
    }
    virtual void printEmployeeDetails(){
        cout << "Temporary Employee:-" << endl;
        cout << "\t" << "ID:\t" << IEmployee::id << endl;
        cout << "\t" << "Name:\t" << IEmployee::name << endl;
        cout << "\t" << "Salary:\t" << IEmployee::salary << endl;
    }
};

int main(){
    try{
        vector<Employee*> vEmps;
        Employee* permEmp = new PermanentEmployee("Ashfaaq Ahmed", 50000);
        Employee* contrEmp = new ContractualEmployee("Ahmed Tawaana", 40000);
        vEmps.push_back(permEmp);
        vEmps.push_back(contrEmp);
//        this line gives static type checking error, now it satisfies LSP.
//        Employee* tmpEmp = new TemporaryEmployee("Talha",20000);
        for (int i = 0; i < vEmps.size(); ++i) {
            vEmps[i]->printEmployeeDetails();
            cout << "\t" << "Bonus:" << vEmps[i]->calculateBonus() << endl;
            cout << "\t" << "Minimum Salary:" << vEmps[i]->getMinimumSalary() << endl;
        }
        vector<IEmployee*> vIEmps;
        IEmployee* permEmp2 = new PermanentEmployee("Ali Rehman", 50000);
        IEmployee* contrEmp2 = new ContractualEmployee("Manzoor Hussain", 40000);
        IEmployee* tmpEmp = new TemporaryEmployee("Aqib Ali",20000);
        vIEmps.push_back(permEmp2);
        vIEmps.push_back(contrEmp2);
        vIEmps.push_back(tmpEmp);

        for (int i = 0; i < vIEmps.size(); ++i) {
            vIEmps[i]->printEmployeeDetails();
            cout << "\t" << "Minimum Salary:" << vIEmps[i]->getMinimumSalary() << endl;
        }

        vEmps.clear();
        vIEmps.clear();
    }
    catch(const std::exception& e)
    {
        std::cerr << endl << "EXCEPTION:" << e.what() << '\n';
    }catch(...){
        std::cerr << "Something went wrong." << '\n';
    }

    return 0;
}