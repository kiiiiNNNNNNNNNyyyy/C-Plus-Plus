#include <iostream>

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

    Queue men;
    Queue women;
    std::string name = "d:\\Git\\C-Plus-Plus\\Advance C++\\Non STL Data Structures\\dance.dat";
    std::string line, sex;
    std::ifstream inFile(name.c_str());
    while(!inFile.eof()){
         getLine(inFile, line);
        sex = line.substr(0, 1);
        if(sex == "M"){
            std::string name2 = line.substr(2);
            men.enqueue(name2);
        }else{
            std::string name2 = line.substr(2);
            women.enqueue(name2);
        }
    }

    while(!men.isEmpty() && !women.isEmpty()){
        std::cout << "The dancing partners will be: ";
        std::cout << men.qFront() << " and ";
        std::cout << women.qFront() << std::endl;
        men.dequeue();
        women.dequeue();
    }  

    if(women.isEmpty()){
        std::cout << "There are " << women.count() << " men are waiting for the next round! " << std::endl;
        std::cout << women.qFront() << " will be first to get a partner." << std::endl;
    }

    if(men.isEmpty()){
        std::cout << "There are " << men.count() << " men are waiting for the next round! " << std::endl;
        std::cout << men.qFront() << " will be first to get a partner." << std::endl;
    }
    inFile.close();
    return 0;
}