#include <iostream>

/* enum stands for enumeration  - 0 1 2 3 */

enum dayOfWeek { M, TU, W, TH, F, SA, S };

int main(){
    dayOfWeek d = M;

    std::cout << d << endl;
    return 0;
}