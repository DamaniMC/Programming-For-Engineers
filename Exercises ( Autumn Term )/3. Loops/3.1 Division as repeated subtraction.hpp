#include <iostream>
#include <string>

std::string str(float a){
  return std::to_string(a);
}
float divide(float alpha,float beta){
  if (beta>alpha){
    float temp1=alpha;
    float temp2=beta;
    alpha =  temp2;
    beta = temp1;
  }
  float gamma=alpha;
  float i=0;
  while (gamma>=0){
    gamma-=beta;
    i++;
  }
  float remainderFrac = (1.0*(gamma+beta))/(1.0*beta);
  return i-1.0+remainderFrac;
}


int main(){
  float a,b;
  std::cout<<"Enter integer a: ";
  std::cin>>a;
  std::cout<<"Enter integer b: ";
  std::cin>>b;
 // std::cout<<multiply(a,b);
  std::cout<<str(a)+" / "+str(b)+" = "+str(divide(a,b));
}

