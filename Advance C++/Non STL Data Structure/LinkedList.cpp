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

        void setNext(Node *aNext){
            next = aNext;   
        }
};


class LList{
    public: 
        Node *head;
        LList(){
            head = NULL;
        }
        void Append(std::string data){
            Node *newNode = new Node(data, NULL);
            Node *tmp = head;
            if(tmp != NULL){
                while(tmp->Next() != NULL){
                    tmp = tmp->Next();
                }
                tmp->setNext(newNode);
            }else{
                head = newNode;
            }
        }

        void Delete(std::string data){
            Node *tmp = head;
            if(tmp == NULL){
                return;
            }
            if(tmp->Next() == NULL){
                delete tmp;
            }else{
                Node *prev;
                do{
                    if(tmp->getData() == data){
                        break;
                    }
                    prev = tmp;
                    tmp = tmp->Next();
                }while(tmp != NULL);
                prev->setNext(tmp->Next());
                delete tmp;
            }
        }

        void Print(){
            Node *tmp = head;
            if(tmp == NULL){
                std::cout << "Empty List" << std::endl;
                return;
            }

            if(tmp->Next() == NULL){
                std::cout << tmp->getData();
                std::cout << " --> ";
                std::cout << "NULL" << std::endl;
            }else{
                do{
                    std::cout << tmp->getData();
                    std::cout << " --> ";
                    tmp = tmp->Next();
                }while(tmp != NULL);
                std::cout << "NULL" << std::endl;
            }
        }
};

int main(){

    LList names;
    names.Append("Raymond");
    names.Print();  
    names.Append("David");
    names.Print();
    names.Append("Jim");
    names.Print();
    names.Append("Tom");
    names.Print();
    names.Delete("David");
    names.Print();
    return 0;
}