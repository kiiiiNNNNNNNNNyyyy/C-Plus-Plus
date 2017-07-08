#include <iostream>
#include <stdlib.h> //for srand and rand
#include <ctime>    //for time

void lottery(int, int);
int main(){

    // srand(time(NULL));   //for seeds
    // int nr = rand() % 49 ;
    lottery(49, 6);
    return 0;

}

void lottery(int total_balls, int balls_to_draw){
    if(total_balls < balls_to_draw)
        return;

    srand(time(NULL));

    int *balls = new int[balls_to_draw];
    for(int i=0; i<balls_to_draw; i++){
        balls[i] = rand() % total_balls + 1;

        for(int j=0; j<i+1; j++){
            if(balls[i] == balls[j] && i != j){   
                i--;
                break;
            }else if(j == i){
                std::cout << balls[i] <<std::endl; 
            }
        }
       
    }

    delete[] balls; //releasing the memory that was dynamically allocated
}
