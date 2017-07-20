#include <iostream>

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

    display(numbers, size);
    std::string names[] = { "Jim", "Fred", "Jane", "Bob", "Mary", "Allison"};  
    //Now if I wanna call the same display function with the above array I wont be able to do it
    //because the datatype for this array is String. I need to make it generic


    return 0;   

}