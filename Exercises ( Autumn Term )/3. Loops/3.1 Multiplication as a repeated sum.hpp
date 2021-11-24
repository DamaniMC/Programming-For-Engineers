#include <iostream>
#include <string>

std::string str(int a){
  return std::to_string(a);
}
int multiply(int alpha,int beta){
  int gamma=0;
  int i=0;
  while (i< beta){
    gamma=gamma+alpha;
    i++;
  }
  return gamma;
}


int main(){
  int a,b;
  std::cout<<"Enter integer a: ";
  std::cin>>a;
  std::cout<<"Enter integer b: ";
  std::cin>>b;
 // std::cout<<multiply(a,b);
  std::cout<<str(a)+" * "+str(b)+" = "+str(multiply(a,b));
}

