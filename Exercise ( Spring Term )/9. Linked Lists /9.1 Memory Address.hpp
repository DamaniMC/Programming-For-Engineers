#include <iostream>
 
int main(){
  /*Creates a variable a and then 
  prints out the address in memory
  
  You should get a different value when you run the program again because the operating system will store
  it in a different place
  
   */
    int a;
    int *p;
    p=&a;
    std::cout << &a << std::endl;
    std::cout << p << std::endl;
}