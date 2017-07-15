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
            std::stringstream stm;
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

    Employee emp1("Jones", 25.00);
    Manager mgr1("Smith", 1200, true);
    Employee *emptr;
    emptr = &emp1;
    std::cout << "Name: " << emptr->getName() << std::endl;
    std::cout << "Pay: " << emptr->grossPay(40) << std::endl;

    emptr = &mgr1;
    std::cout << "Name: " << emptr->getName() << std::endl;
    std::cout << "Pay: " << emptr->grossPay(40) << std::endl;

    //the above code returns wrong input because the compiler here is looking at the object that is stored
    //in our variable, but instead its looking at the datatype  of the variable itself So the pointer to employee is still gonna call
    // the employee grossspay function even if its a manager object.
    return 0;
}