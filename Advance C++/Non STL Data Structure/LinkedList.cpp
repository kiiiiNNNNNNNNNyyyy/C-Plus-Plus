#include <iostream>

class Node{
    public:
        std::string data;
        Node *next;  
        Node(std::string aData, Node *aNext){
            data = aData;
            next = aNext;
        }

        std::string getData(){
            return data;
        }

        Node *Next(){ 
            return next;
        }
};

int main(){
    return 0;
}