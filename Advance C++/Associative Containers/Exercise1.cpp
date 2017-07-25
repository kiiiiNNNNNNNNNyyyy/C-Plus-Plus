#include <iostream>
#include <map>
#include <fstream>

void showNumber(std::map<std::string, std::string>phonelist){
    std::string name;
    std::cout << "Enter a name : " ;
    std::cin >> name;
    std::cout << std::endl;
    std::cout << "The number is : " << phonelist[name] << std::endl;
}

void showMenu(){
    std::cout <<  "1. Get Number" << std::endl;
    std::cout << "2. Quit" << std::endl;
    std::cout << std::endl;
    std::cout << "Enter a Choice : ";
}

std::string getName(std::string line){
    int pos = line.find(",");
    return line.substr(0, pos); 
}

std::string getNumber(std::string line){
    int pos = line.find(",");
    return line.substr(pos+1);
}

int main(){

    std::map<std::string, std::string> phonelist;
    std::ifstream inFile("D:\\Git\\C-Plus-Plus\\Advance C++\\Associative Containers\\phonelist.dat");

    std::string line, name, number;
    while(!inFile.eof()){
        getline(infile, line);
        name = getName(line);
        number = getNumber(line);
        phonelist[name] = number;
    }

    inFile.close();
    int choice = 1;

    while(choice != 2){
        showMenu();
        std::cin >> choice;

        if(choice == 1){
            showNumber(phonelist);
        }
    }

    return 0;
}