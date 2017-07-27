#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <numeric>

template <typename T>
void display(std::vector<T> v){
    for(int i=0; i<v.size(); ++i){
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}

int genRandom(){
    return rand() % 100 + 1;
}

int main(){

    std::vector<int> numbers(10);
    srand(time(NULL));
    for(int i=0; i<numbers.size(); ++i){
        numbers[i] = rand() % 100 + 1;
    } 

    display(numbers);
    int sum = 0;
    for(int i=0; i<numbers.size(); ++i){
        sum += numbers[i];
    }

    std::cout << "The sum is : " << sum << std::endl;    

    std::cout << "Using libraries : " << std::endl;
    generate(numbers.begin(), numbers.end(), genRandom);
    display(numbers);
    int sum2 = accumulate(numbers.begin(), numbers.end(), 0);    //start with zero, and add all values from being to end
    std::cout << "The sum is : " << sum << std::endl;
    return 0;   
}