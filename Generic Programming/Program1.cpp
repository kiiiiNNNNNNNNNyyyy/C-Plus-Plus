#include <iostream>
#include <string>


template <typename T>

void genericDisplay(T arr[], int size){
    for(int i=0; i<size; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

template <typename T>

T max(T &arg1, T &arg2){
    if(arg1 > arg2){
        return arg1;
    }else{
        return arg2;
    }
}

void display(int arr[], int size){
    for(int i=0; i<size; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main(){

    const int size = 10;
    int numbers[size];

    for(int i=0; i<size; i++){
        numbers[i] = i+1;   
    }

    genericDisplay(numbers, size);
    std::string names[] = { "Jim", "Fred", "Jane", "Bob", "Mary", "Allison", "Harry", "Tom", "Jim", "Karen"};  
    //Now if I wanna call the same display function with the above array I wont be able to do it
    //because the datatype for this array is String. I need to make it generic

    genericDisplay(names, size);    //the generic function using a template

    int a = 12;
    int b = 24;
    std::cout << max(a, b) << std::endl;

    double x = 2.25;
    double y = 2.35;
    std::cout << max(x, y) << std::endl;

    std::string w1 = "apple";
    std::string w2 = "grapes";
    std::cout << max(w1, w2) << std::endl; 

    return 0;   

}