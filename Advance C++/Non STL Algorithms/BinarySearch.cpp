#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
//Binary search need data to be sorted

int binarySearch(std::vector<int> vec, int key){
    int first = 0;
    int last = vec.size() - 1;
    while(first <= last){
        int mid = (first + last) / 2;
        if(key > vec[mid]){
            first = mid + 1;
        }else if(key < vec[mid]){
            last =  mid - 1;
        }else{
            return mid;
        }
    }

    return -(first + 1);
}

int main(){
    std::vector<int> numbers;
    srand(unsigned(time(0)));

    for(int i=0; i<50; ++i){
        numbers.push_back((rand() % 100) + 1);
    }
    sort(numbers.begin(), numbers.end());
    for(int i=0; i<numbers.size(); ++i){
        std::cout << numbers[i] << " ";
    }

    int key;
    std::cout << std::endl << "Enter a number to search for : ";
    std::cin >> key;
    int retValue = binarySearch(numbers, key);
    if(retValue > -1){
        std::cout << "Found number at: " << retValue << std::endl;
    }else{
        std::cout << "Number not found!!";
    }
    return 0;
}