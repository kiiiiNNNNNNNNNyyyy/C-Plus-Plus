#include <iostream>

/* enum stands for enumeration  - 0 1 2 3 */

enum dayOfWeek { M = 1, TU, W, TH, F, SA, S };

std::string getDay(dayOfWeek);
int main(){
    dayOfWeek d = M;

    std::cout << d << std::endl;
    std::cout << dayOfWeek(M) << std::endl;
    std::cout << getDay(M) << std::endl;
    return 0;
    //WE CANNOT DO CIN FOR ENUM
}

std::string getDay(dayOfWeek d){
    switch(d){
        case M: 
            return "Monday";
        
        case TU: 
            return "Tuesday";

        case W: 
            return "Wednesday";
        
        case TH:
            return "Thursday";
        
        case F: 
            return "Friday";

        case SA:
            return "Saturday";

        case S:
            return "Sunday";

        default: 
            return "You typed something wrong";
    }
}