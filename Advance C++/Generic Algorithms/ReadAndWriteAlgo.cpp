#include <iostream>
#include <vector>
#include <algorithm>
template<typename T>

void display(std::vector<T> v){
    for(int i=0; i<v.size(); ++i){
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}

int main(){

    std::vector<int> numbers;
    for(int i=1; i<=10; ++i){
        numbers.push_back(i);
    }

    display(numbers);
    std::vector<int> numbers2;
    fill(numbers2.begin(), numbers2.end(), 0);    //fill with 0, starting from the begin to the end
    display(numbers2);

    std::vector<std::string> names;
    names.push_back("Jennifer");
    names.push_back("David");
    names.push_back("Jim");
    names.push_back("Tom");
    names.push_back("Will");
    display(names);
    fill(names.begin(), names.end(), std::string(""));
    display(names); 

    replace(numbers.begin(), numbers.end(), 5, 10); //replace 5 with 10
    display(numbers);   

    std::vector<std::string> names2;
    names2.push_back("Tom");
    names2.push_back("Will");
    names2.push_back("Raymond");
    names2.push_back("Eric");
    display(names2);
    replace(names2.begin(), names2.end(), std::string("Raymond"), std::string("David"));
    display(names2);

    return 0;
}