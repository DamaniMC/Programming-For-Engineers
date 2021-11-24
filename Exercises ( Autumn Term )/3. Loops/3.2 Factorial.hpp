#include <iostream>
#include <string>
//takes in integer a
int factorial(int a){
  //start with product1 because the factorial of any postitive integer will be > 1
  int product=1;
  //iterates from a to 1 backwards so a, a-1, a-2.....1
  for(int i=a;i>0;i--){
    //multiplies product by a
    product*=i;
  }
  //returns the product
  return product;
}
int main(){
    int n;
    std::cout<<"Enter an integer\n";
    std::cin >> n; // 
    std::cout<<n<<"! = "<<factorial(n);
}

