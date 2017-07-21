#include <iostream>
#include <vector>
#include <string>

template<class T, class U>
class CMap{
    private: 
        std::vector<T> keys;
        std::vector<U> values;

    public:
        void insert(T key, U value){
            keys.push_back(key);
            values.push_back(value);
        }

        void get(int n){
            std::cout << keys[n] << " : " << values[n] << std::endl                 ;
        }
};

int main(){

    CMap<std::string, int> grades;
    grades.insert("Jones", 88);  
    grades.insert("Smith", 89);

    grades.get(0);
    std::cout<<std::endl;
    grades.get(1);
    std::cout << std::endl;
    return 0;
}