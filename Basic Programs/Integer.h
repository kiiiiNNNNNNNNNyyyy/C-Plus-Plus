#ifndef INTEGER_H_INCLUDED
#define INTEGER_H_INCLUDED

class Integer{
    private:
        int nr;
    public:
        Integer(){

        };
        Integer(int value){
            this->nr = value;
        };
        operator int(){
            return this->nr;
        };
        int getNumber(){
            return nr;
        };
        int operator+=(Integer o){
            this->nr = o.getNumber() + this->nr;
            return this->nr;
        };
};

#endif