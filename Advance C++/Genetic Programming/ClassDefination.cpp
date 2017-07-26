#include <iostream>

template <typename T>
class Stack{
    private:
        T dataStore[100];
        int top;
    
    public:
        Stack(){
            top = -1;
        }

        void push(int num){
            ++top;
            dataStore[top] = num;
        }

        T pop(){
            T val = dataStore[top];
            dataStore[top] = 0;  
            --top;
            return val;
        }

        T peek(){
            return dataStore[top];
        }
};

// Inorder to deal with the propblem with strings (in pop functionn we are assigning to 0 which is a int)
// we initialize a template

template<>
class Stack<std::string> {
    private:
        std::string dataStore[100];
        int top;
    
    public:
        Stack(){
            top = -1;
        }

        void push(std::string val){
            ++top;
            dataStore[top] = val;
        }

        std::string pop(){
            std::string val = dataStore[top];
            dataStore[top] = "";  
            --top;
            return val;
        }

        std::string peek(){
            return dataStore[top];
        }
};

int main(){

    Stack<int> numbers;
    numbers.push(12);
    numbers.push(33);
    numbers.push(21);
    numbers.push(14);

    std::cout << numbers.peek() << std::endl;

    int value = numbers.pop();
    std::cout << numbers.peek() << std::endl;

    Stack<double> numbers2;
    numbers2.push(12.1);
    numbers2.push(33.5);
    numbers2.push(21.5);
    numbers2.push(1.4);

    std::cout << numbers2.peek() << std::endl;

    double value2 = numbers2.pop();
    std::cout << numbers2.peek() << std::endl;

    Stack<std::string> names;
    names.push("Mary");
    names.push("Joe");
    names.push("Dank");
    names.push("Memes");

    std::cout << names.peek() << std::endl;

    std::string name = names.pop();
    std::cout << names.peek() << std::endl;

    return 0;
}