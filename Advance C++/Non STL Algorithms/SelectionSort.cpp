#include <iostream>
#include <ctime>
#include <cstdlib>

void display(int arr[], int size){
    for(int i=0; i<size; ++i){
        std::cout << arr[i] << " ";
    }
    std::cout  << std::endl;
}

void selectionSort(int arr[], int size){
    int first, temp;
    for(int i=size-1; i>0; --i){
        first = 0;
        for(int j=1; j<=i; ++j){
            if(arr[j] > arr[first]){
                first = j;
            }
            temp = arr[first];
            arr[first] = arr[i];
            arr[i] = temp;
        }
    }
}

int main(){

    const int size = 10;
    int numbers[size];
    srand(unsigned(time(0)));
    for(int i=0; i<size; ++i){
        numbers[i] = (rand() % 100) + 1;
        std::cout << numbers[i];
    }
    std::cout <<std::endl;
    selectionSort(numbers, size);
    display(numbers, size);

    return 0;
}