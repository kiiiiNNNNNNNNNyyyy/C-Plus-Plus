#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED

class User{

    int id;
    //static int counter = 0;   //to run this make another cpp file for the class and initialize functions in it
    int counter = 0;
    public:
        User(){
            counter++;
            id = counter;
        };
        ~User(){
        };
        int getId(){
            return id;
        };
};


#endif