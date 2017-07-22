#include <iostream>
#include <vector>

template <typename T>

class List{
    private:
        std::vector<T> dataStore;
    
    public:    
        List(){

        }

        void add(T item){
            dataStore.push_back(item);
        }

        void display(){
            for(int i=0; i<dataStore.size(); ++i){
               std::cout << dataStore[i] << std::endl;  
            }
        }
};

int main(){
    
    List<std::string> grocery;
    grocery.add("milk");
    grocery.add("eggs");
    grocery.add("bread");
    grocery.add("sugar");

    grocery.display();

    List<double> grades;
    grades.add(58.66);
    grades.add(88.66);
    grades.add(83.63);
    grades.add(98.12);

    grades.display();
    return 0;
}