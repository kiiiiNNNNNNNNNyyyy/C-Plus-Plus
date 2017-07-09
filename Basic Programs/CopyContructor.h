#ifndef COPYCONSTRUCTOR_H_INCLUDED
#define COPYCONSTRUCTOR_H_INCLUDED

class Test{

    public: 
        int x;
        int y;
        int *p;
        Test(const Test & obj){ //WHEN WE create our own copy constructor, the implicit one doesn't work then
            this->p = new int (*(obj.p));   
            this->x = obj.x;
            this->y = obj.y;
        };  
        Test(int x, int y, int value){  //this is a normal constructor copying values
            this->x = x;
            this->y = y;
            this->p = new int(value);   //assigning can also be done like this
        };
        ~Test(){
            delete p;
        };  

};

#endif