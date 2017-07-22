#include <iostream>
#include <fstream>

using namespace std;
int main(){

    ifstream file;
    file.exceptions(ifstream::failbit  | ifstream::badbit);

    try{
        file.open("file.txt");
        while(!file.eof()){
            cout << file.get();
        }
    }catch(ifstream::failure e){
        cout<< e.what() << endl;
        cout << "Error in opening file." << endl;
        return 1;
    } 

    file.close();   // returns -1 if the file does not exist
    return 0;
}