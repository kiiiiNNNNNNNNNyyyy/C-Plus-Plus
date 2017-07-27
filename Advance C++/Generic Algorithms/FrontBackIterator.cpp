#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

template <typename T>
void display(std::vector<T> v){
    for(int i=0; i<v.size(); ++i){
        std::cout << v[i] << " ";
    }
}

int main(){

    std::vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    std::vector<int> v2;
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);

    copy(v2.begin(), v2.end(), back_inserter(v1));  //addind data to the end of the container - push_back must be allowed, will not work in array
    display(v1);

    std::deque<int> d1;
    d1.push_front(1);
    d1.push_front(2);
    d1.push_front(3);
    copy(v2.begin(), v2.end(), front_inserter(d1));
    std::cout << d1.front() << std::endl;

    return 0;
}