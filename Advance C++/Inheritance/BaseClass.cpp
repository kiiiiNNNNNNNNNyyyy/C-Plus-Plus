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

int main(){

    Employee empl1("Jane Smith", 35000);
    Employee empl2("Bill Brown", 45000);
    
    std::cout << empl1.toString() << std::endl;
    std::cout << empl2.toString() << std::endl;

    return 0;
}