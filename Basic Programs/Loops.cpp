#include <iostream>

main(){

    //FOR LOOP
    for(int i=0; i<5; i++){
        std::cout << i << " " ;
    }

    int array1[4];
    std::cout << std::endl;
    for(int i=0; i<4; i++){
        array1[i] = i;
    }

    for(int i=0; i<4; i++){
       std::cout << array1[i] << " ";
    }
    std::cout << std::endl;

    //WHILE and DOWHILE
    int x = 0;
    
    while(x < 10){
        std::cout<< "X = " << x << std::endl;
        x++; 
    }

    do{
        std::cout << "Do While x = " << x << std::endl;
        x++;
    }while(x < 20);

}