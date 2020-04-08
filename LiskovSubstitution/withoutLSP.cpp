#include<iostream>
#include<string>
#include<vector>
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

class PermanentEmployee : public Employee{
    public:
        PermanentEmployee(string name, double salary) : Employee{name, salary}{
        }
        double calculateBonus(){
            return 0.50 * this->getSalary();
        }
};

class ContractualEmployee : public Employee{
    public:
    ContractualEmployee(string name, double salary) : Employee{name, salary}{
    }
        double calculateBonus(){
            return 0.20 * this->getSalary();
        }
};

class TempEmployee : public Employee{
    public:
    TempEmployee(string name, double salary) : Employee{name, salary}{
    }
        double calculateBonus(){
            throw logic_error("Not Implemented.");
        }
};

int Employee::counter = 0;

int main(){
    try
    {
        vector<Employee*> vEmps;
        Employee *permEmp = new PermanentEmployee("Talha", 50000.0);
        Employee *contrEmp = new ContractualEmployee("Basit", 50000);
        // HERE LSP is violated, as if followed, it should work properly, but exception here
        Employee *tmpEmp = new TempEmployee("Fahad", 50000);
        vEmps.push_back(permEmp);
        vEmps.push_back(contrEmp);
        vEmps.push_back(tmpEmp);
        for (size_t i = 0; i < vEmps.size(); i++)
        {
            cout << "Employee:" << vEmps[i]->calculateBonus() << endl;
        }
        
    }
    catch(const std::exception& e)
    {
        std::cerr << endl << "EXCEPTION:" << e.what() << '\n';
    }catch(...){
        std::cerr << "Something went wrong." << '\n';
    }

    return 0;
}