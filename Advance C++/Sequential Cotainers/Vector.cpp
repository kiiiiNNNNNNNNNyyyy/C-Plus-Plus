#include <iostream>
#include <vector>
//Sequential containers container the item of the same type

int main(){

    std::vector<int> numbers(10);   //we can limit the vector but it will grow automatically
    for(int i=1; i<11; i++){
        numbers.push_back(i);
    }

    int sum = 0;
    for(int i=0; i<numbers.size(); ++i){
        sum += numbers[i];
    }

    std::cout << "The total sum is : " << sum << std::endl;
    return 0;
}