#include <iostream>
#include <sstream>  //to concatenate string with double

class Employee{
    private: 
        std::string name;
        double pay;
    public:
        Employee(){
            name = "";
            pay = 0;
        }

        Employee(std::string empName, double payRate){
            name = empName;
            pay = payRate;
        }

        std::string getName(){
            return name;
        }

        void setName(std::string empName){
            name = empName;
        }

        double getPay(){
            return pay;
        }

        void setPay(double newPay){
            pay = newPay;
        }

        std::string toString(){
            std::stringstream stm;
            stm << name << " : " << pay;    //concatenating string with a double using sstream lib
            return stm.str();
        }

};

class Manager : public Employee{    //derived class inherited from Employee class
    private: 
        bool salaried;

    public:
        ////becoz we wanna use the constructor from employee class, that why declaring like this
        Manager(std::string name, double payRate, bool isSalaried) : Employee(name, payRate){     
            salaried = isSalaried;
        }

        bool getSalaried(){
            return salaried;
        }
};

int main(){

    Employee empl1("Jane Smith", 35000);
    Employee empl2("Bill Brown", 45000);
    std::cout << empl1.toString() << std::endl;
    std::cout << empl2.toString() << std::endl;

    Employee empl3("Mary Smith", 15.00);
    std::cout << "Employee name: " << empl3.getName() << std::endl;
    std::cout << "Employee payrate: " << empl3.getPay() << std::endl;

    Manager man1("Bob Brown", 1500, true);
    std::cout << "Employee name: " << man1.getName() << std::endl;
    std::cout << "Employee payrate: " << man1.getPay() << std::endl;
    std::cout << "isSalaried ?: " << man1.getSalaried() << std::endl; 
    return 0;
}