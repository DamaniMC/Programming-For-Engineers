#include <iostream>
#include <string>

//pounds to euros
const float exchangeRate = 1.18;
int main(){
 
    float valuePounds;
   

    std::cout << "How much money do you have in GBP?\n";
    std::cin >> valuePounds;
    std::cout << "This is equivalent to "<<exchangeRate*valuePounds<<" EUR as of 18:40 11/10/2021";
    
}