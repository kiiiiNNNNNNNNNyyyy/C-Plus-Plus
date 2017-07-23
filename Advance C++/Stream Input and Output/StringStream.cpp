#include <iostream>
#include <sstream>

class Person{
    private:
        std::string firstname, middle, lastname;
        int age;

    public: 
        Person(std::string f, std::string m, std::string l, int a) {
            firstname = f;
            middle = m;
            lastname = l;
            age = a;
        }

        std::string ToString(){
            //return first + " "  + middle + " " + lastname + " " age;    //won't work as concatenating string with int
            std::stringstream stm;
            stm << first << " " << middle << " " << lastname << " " << age;
            return stm.str();
        }
};

int main()
    Person aPerson("George", "Fred", "Jones", 27);
    std::cout << aPerson.ToString() << std::endl;
    return 0;
}