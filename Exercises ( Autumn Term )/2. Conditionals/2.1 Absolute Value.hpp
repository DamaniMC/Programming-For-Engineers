#include <iostream>
 
int main(){
    double n, absv;
    // n for the input, absv will be
    // the absolute value we compute
    std::cout<<"Input a value \n";
    std::cin >> n;
    // TODO: read the input number in n
 
    if(n < 0){ // yes/no question: is n less than 0?
        // if yes, its absolute value is the number changing the sign
        absv = -n;
    }
    else{
        absv = n;
    }
 
    std::cout << "|" << n << "| = " << absv << std::endl;
 
}