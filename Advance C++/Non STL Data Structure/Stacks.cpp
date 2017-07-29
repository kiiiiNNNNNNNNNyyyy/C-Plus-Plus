#include <iostream>
#include <string>

class Stack{
    private: 
        std::string dataStore[100];
        int top;

    public:
        Stack(){
            top = -1; 
        }

        void push(std::string value){
            ++top;
            dataStore[top] = value; 
        }

        std::string pop(){
            std::string retVal = dataStore[top];
            --top;
            return retVal;
        }

        std::string peek(){
            return dataStore[top];
        }
};

int main(){
    return 0;
}