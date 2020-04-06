#include<iostream>
#include<string>
using namespace std;

class Employee{
    private:
        static int counter;
        string name;
        int ID;
        double salary;
        string type;
    public:
        Employee(string name, double salary, string type){
            counter++;
            this->name = name;
            this->salary = salary;
            this->type = type;
        }
        double calculateBonus(){
            if(this->type == "Contractual"){
                return 0.20 * this->salary;
            }else if(this->type == "Permanent"){
                return 0.50 * this->salary;
            }else{
                return 0.0;
            }
        }

};

int Employee::counter = 0;

int main(){
    Employee *permEmp = new Employee("Talha", 50000, "Permanent");
    Employee *contrEmp = new Employee("Basit", 50000, "Contractual");
    cout << "Permanent Emp Bonus:" << permEmp ->  calculateBonus() << endl;
    cout << "Contractual Emp Bonus:" << contrEmp ->  calculateBonus() << endl;
    return 0;
}