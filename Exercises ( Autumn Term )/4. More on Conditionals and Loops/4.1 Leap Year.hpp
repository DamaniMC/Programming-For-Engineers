#include <iostream>
 
int main(){
    int year;
 
    std::cout << "please enter a year" << std::endl;
    std::cin >> year;
 
    if( (year % 4) == 0)
    { 

        
        
        if( (year % 100) == 0){ 
            
          if((year % 400) ==0){
             std::cout << "This is a leap year" << std::endl;
          }else{
              std::cout << "This is not leap year" << std::endl;
          }
           
 
        }
        else{ 
            
             std::cout << "This is a leap year" << std::endl;
        }
    }
    else{
        //
        std::cout << "This is not a leap year" << std::endl;
    }
}