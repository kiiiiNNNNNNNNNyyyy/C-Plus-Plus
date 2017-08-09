#include <iostream>
#include <cstdlib>
#include <ctime>

int linearSearch(int arr[], int size,  int key){
    for(int i=0; i<size; ++i){
        if(key == arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){

    const int size = 20;
    int number[size];
    srand((unsigned) time(0));
    for(int i=0; i<size; ++i){
        number[i] = (rand() % 100)+1;
        std::cout << number[i] << " ";
    }

    int key;
    std::cout << std::endl << "Enter a key to search!!: ";
    std::cin >> key;
    int retValue = linearSearch(number, size, key);
    if(retValue >= 0){
        std::cout << "Key found at position " << retValue << std::endl;
    } else{
        std::cout << "Key not found!!";
    }
    return 0;
}