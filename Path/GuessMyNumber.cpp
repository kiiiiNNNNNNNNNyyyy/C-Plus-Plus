#include <iostream>

int main(){

    int answer = 9;
    bool guessed = false;
    int choice;
    while(choice != answer){
        std::cout << "Guess what number am I thinking of?" << std::endl;
        std::cin >> choice;
        if(choice == answer){
            guessed = true;
            std::cout << "You guessed it right!! Its " << answer;
        }else{
            std::cout << "Wrong!! Try Again!!";
        }
    }
    return 0;
}