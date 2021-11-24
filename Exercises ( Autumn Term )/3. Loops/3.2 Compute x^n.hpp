#include <iostream>
#include <string>


float pow(float alpha,int beta){
  float gamma =1;
  for(int i=0;i<beta;i++){
    gamma*=alpha;
  }
  return gamma;
}


int main(){
  float a ;
  int b;
  std::cout<<"Enter a number a: ";
  std::cin>>a;
  std::cout<<"Enter an integer exponent b: ";
  std::cin>>b;
 // std::cout<<multiply(a,b);
  std::cout<<a<<"^"<<b<<" = "<<(pow(a,b));
}
