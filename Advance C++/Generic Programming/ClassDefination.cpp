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
            --top;
            return val;
        }

        T peek(){
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

    return 0;
}