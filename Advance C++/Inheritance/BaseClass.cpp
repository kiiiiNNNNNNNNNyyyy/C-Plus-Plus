#include <iostream>
#include <sstream>  //to concatenate string with double

class Employee{
    private: 
    protected:
        double pay;
        std::string name;
    public:
        Employee(){
            name = "";
            pay = 0;
        }

        Employee(std::string empName, double payRate){
            name = empName;
            pay = payRate;
        }

        ~Employee(){}
         
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
                 stm;
            stm << name << " : " << pay;    //concatenating string with a double using sstream lib
            return stm.str();
        }

        double grossPay(int hours){
            return pay * hours; 
        }

};

class Manager : public Employee{    //derived class inherited from Employee class
    private: 
        bool salaried;

    public:
        ////becoz we wanna use the constructor from employee class, that why declaring like this
        // Manager(std::string name, double payRate, bool isSalaried) : Employee(name, payRate){     
        //     salaried = isSalaried;
        //default constructor
        Manager() : salaried(true){}

        Manager(std::string name, double payRate, bool isSalaried) : Employee(name, payRate){     
            salaried = isSalaried;
        }

        //free allocated memory - called automatically
        ~Manager(){}

        bool getSalaried(){
            return salaried;
        }
        
        double grossPay(int hours){
            if(salaried){
                return pay; //this wont work coz pay is private, need to change the access level
            }else{
                return pay * hours; 
            }
            
        }

        std::string toString(){
            std::stringstream stm;
            std::string salary;
            if(salaried){
                salary = "Salaried";
            }else{
                salary = "Hourly";
            }
            stm << name << " : " << pay << " : " << salary << std::endl;
            return stm.str();
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
    std::cout << "Employee gross rate: " << empl3.grossPay(40) << std::endl;

    Manager man1("Bob Brown", 1500, true);
    std::cout << "Employee name: " << man1.getName() << std::endl;
    std::cout << "Employee payrate: " << man1.getPay() << std::endl;
    std::cout << "isSalaried ?: " << man1.getSalaried() << std::endl; 
    std::cout << "Employee gross pay: " << man1.grossPay(10) << std::endl; 
    std::cout << "Testing manager toString: " << man1.toString() << std::endl;


    return 0;
}