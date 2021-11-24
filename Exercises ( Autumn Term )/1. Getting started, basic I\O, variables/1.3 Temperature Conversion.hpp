#include <iostream>
#include <string>

//pounds to euros

int main(){
 
    float tempCelc;
   

    std::cout << "What is the temperature in Celcius?\n";
    std::cin >> tempCelc;
    std::cout << "This is equivalent to "<<(tempCelc*9/5) + 32<<" Farenheit";
    
}