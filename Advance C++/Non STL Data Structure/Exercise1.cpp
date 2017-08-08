#include <iostream>

class Stack{
    private: 
        int dataStore[100];
        int top;

    public:
        Stack(){
            top = -1;  
        }

        void push(int value){
            ++top;
            dataStore[top] = value; 
        }

        int pop(){
            int retVal = dataStore[top];
            --top;
            return retVal;
        }

        int peek(){
            return dataStore[top];
        }

        int count(){
            return top + 1;
        }

        void clear(){
            for(int i=0; i<=top-1; ++i){
                dataStore[i] = 0;
            }
            top = -1;
        }

        bool isEmpty(){
            if(top == -1){
                return true;
            }else{
                return false;
            }
        }
};

void Convert(int number){
    const int base = 2;
    Stack digits;
    do{
        digits.push(number % base);
        number = number / base;
    }while(number != 0);

    while(digits.count() > 0){
        std::cout << digits.pop(); 
    }
}
int main(){
    
    int number;
    std::cout << "Enter a base 10 number: ";
    std::cin >> number;
    std::cout << number << " base 10 equals ";
    Convert(number);
    std::cout << " base 2." << std::endl; 
    return 0;
}