#ifndef FRIENDCLASSES_H_INCLUDED
#define FRIENDCLASSES_H_INCLUDED

class B; //Declaration of declaration - coz we wont be able to create an object before class it exists  
class A{
    public:
        void setSecretValue(B & obj, int value){
            obj.secretValue = value;
        }
};

class B{

    friend class A;
    int secretValue;

    public:
        int getSecretValue(){
            return secretValue;
        };
};

#endif