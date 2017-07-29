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

        int count(){
            return top + 1;
        }

        void clear(){
            for(int i=0; i<=top-1; ++i){
                dataStore[i] = "";
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

int main(){

    Stack names;
    names.push("Mary");
    names.push("Joe");
    names.push("Jim");
    names.push("Tom");

    std::cout << "Number of items : " << names.count() << std::endl;
    
    if(!names.isEmpty()){
        names.pop();
    }

    std::cout << "Number of items after removal : " << names.count() << std::endl;
    names.clear();

    std::cout << "Number of items after removal : " << names.count() << std::endl;
    return 0;
}