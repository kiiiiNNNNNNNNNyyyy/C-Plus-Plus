#include <iostream>
#include <ctime>
#include <cstdlib>

void display(int arr[], int size){
    for(int i=0; i<size; ++i){
        std::cout << arr[i] << " ";
    }
    std::cout  << std::endl;
}

void quickSort(int arr[], int left, int right){
    int i = left;
    int j = right;
    int tmp;
    int pivot = arr[(left + right) / 2];
    while(i<=j){
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }

        if(i<=j){
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    }

    if(left < j)
        quickSort(arr, left, j);

    if(i < right)
        quickSort(arr, i, right);
}

int main(){

    const int size  = 100;  
    int numbers[size];
    srand(unsigned(time(0)));
    for(int i=0; i<size; ++i){
        numbers[i] = (rand() % 100) + 1;
    }

    std::cout << "Unsorted Array: " << std::endl;
    display(numbers, size);
    std::cout << "Sorting Array: " << std::endl;
    quickSort(numbers, 0, size-1);
    std::cout << "Sorted Array: " << std::endl;
    display(numbers, size);
    return 0;
}