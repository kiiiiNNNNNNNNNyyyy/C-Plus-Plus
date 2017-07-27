#include<iostream>
#include<algorithm>
#include<vector>

template<typename T>
void display(std::vector<T> v){
    for(int i=0; i<v.size(); ++i){
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}

int main(){

    const int size = 10;
    int numbers[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    std::vector<int> nums(numbers, numbers+size);
    display(nums);
    sort(nums.begin(), nums.end());
    display(nums);

    const int size2 = 5;
    std::string names[] = {"Tom", "Eric", "David", "Jim", "Arjun"};
    std::vector<std::string> namesVector(names, names+size2);
    display(namesVector);
    sort(namesVector.begin(), namesVector.end());
    display(namesVector);
    return 0;
}