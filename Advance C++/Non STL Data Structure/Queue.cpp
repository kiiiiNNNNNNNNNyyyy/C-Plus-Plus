#include <iostream>
#include <string>

class Queue{
    private:
        std::string dataStore[100];
        int back;
        const static int front = 0; // const becuase the front will never change

        void shift(){
            for(int i=front; i<=back; ++i){
                dataStore[i] = dataStore[i+1];
            }
            --back;
        }

    public:
        Queue(){
            back = -1;
        }

        void enqueue(std::string value){
            ++back;
            dataStore[back] = value;
        }

        std::string dequeue(){
            std::string retVal = dataStore[front];
            shift();
            return retVal;
        }

        void show(){
            for(int i=front; i<=back; ++i){
                std::cout << dataStore[i] << " ";
            }
            std::cout << std::endl;
        }

        int count(){
            int cnt = 0;
            for(int i=0; i<=back; ++i){
                ++cnt;
            }
            return cnt;
        }

        std::string qFront(){
            return dataStore[front];
        }

        std::string qBack(){
            return dataStore[back];
        }

        bool isEmpty(){
            if(back == -1){
                return true;
            }else{
                return false;
            }
        }

        void clear(){
            for(int i=front; i<=back; ++i){
                dataStore[i] = "";
            }
        }

};

int main(){

    Queue names;
    names.enqueue("Mary");
    names.enqueue("Joe");
    names.enqueue("Jim");
    names.enqueue("Tom");

    std::cout << "Front: " <<names.qFront() << std::endl;
    std::cout << "Back: " <<names.qBack() << std::endl;

    names.show();
    names.dequeue();

    std::cout << "Front: " <<names.qFront() << std::endl;
    std::cout << "Back: " <<names.qBack() << std::endl;
    names.show();
    names.enqueue("Arjun");
    names.show();
    names.dequeue();

    std::cout << "Front: " <<names.qFront() << std::endl;
    std::cout << "Back: " <<names.qBack() << std::endl;
    names.show();

    names.clear();
    std::cout << "Front: " <<names.qFront() << std::endl;
    std::cout << "Back: " <<names.qBack() << std::endl;
    names.show();
    return 0;
}