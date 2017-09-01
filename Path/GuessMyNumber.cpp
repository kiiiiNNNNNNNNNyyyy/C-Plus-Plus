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
        }else if(choice > answer){
            std::cout << "Wrong!! Try Again!! It's less than " << choice << "." << std::endl;
        }else{
            std::cout << "Wrong!! Try Again!! It's greater than " << choice << "." << std::endl;
        }
    }
    return 0;
}