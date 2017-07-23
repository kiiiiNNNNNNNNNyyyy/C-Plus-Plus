#include <iostream>
#include <fstream>
#include <sstream>

int main(){
    std::ifstream gradeFile;
    std::stringstream grades;

    int grade;
    int total = 0;
    
    gradeFile.open("C:\\Git\\C-Plus-Plus\\Advance C++\\Stream Input and Output\\grades.txt");
    std::string line;
    getline(gradeFile, line);
    grades << line;
    gradeFile.close();

    for(int i=0; i<5; i++){
        grades >> grade;
        total += grade;
    }
    
    double average = total / 5; 
    std::cout << "average : " << average << std::endl; 
    return 0;
}