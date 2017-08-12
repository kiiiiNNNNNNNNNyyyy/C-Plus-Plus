#include <iostream>

namespace minMax{
    
    int min(int num1, int num2){
        if(num1 < num2){
            return num1;
        }else{
            return num2;
        }
    }

    int max(int num1, int num2){
        if(num1 > num2){
            return num1;
        }else{
            return num2;
        }
    }
}

// creating class inside a namespace
namespace People{
    class Person{
        private:
            std::string name;
            std::string sex;

        public:
            Person(std::string n, std::string s){
                name = n;
                sex = s;
            }

            std::string get(){
                return name + ", " + sex;
            }
    };
}

int main(){

    using namespace minMax;
    using namespace People;
    int a,b; 

    std::cout << "Enter a numbers: ";
    std::cin >> a;
    std::cout <<" Enter the second number : ";
    std::cin >> b;

    std::cout << min(a, b) << std::endl;
    std::cout << max(a, b) << std::endl;

    Person you("Jane Doe", "F");
    std::cout << you.get() << std::endl;
    
    return 0;
}