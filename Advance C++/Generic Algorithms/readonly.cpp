#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main(){

    std::vector<int> numbers;

    for(int i=1; i<=10; ++i){
        numbers.push_back(i);
    }

    int sum=0;
    for(int i=0; i<numbers.size(); ++i){
        sum += numbers[i];
    }

    std::cout << "The sum is " << sum << std::endl;

    //accumulate is does the same thing aas the above for loop
    //Its faster and guranteed to be correct
    //library functions are always preferred over user written codes
    int sum1= accumulate(numbers.begin(), numbers.end(), 0);    //from, to, start
    std::cout << "The sum is " << sum1 << std::endl;

    std::vector<std::string> words; 
    words.push_back("a");
    words.push_back("man");
    words.push_back("a");
    words.push_back("plan");
    words.push_back("a");
    words.push_back("canal");
    words.push_back("panama");

    std::string palindrome = accumulate(words.begin(), words.end(), std::string(""));
    std::cout << palindrome << std::endl;
    // now we can reverse this string and can check if it is a palindrome

    return 0;
}