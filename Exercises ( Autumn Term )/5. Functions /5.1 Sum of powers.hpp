.
#include <iostream>
#include <cmath>

void sumPow(float x,int n){
  float sum=0;
  for(int i=1;i<n+1;i++){
    std::cout<<"+"<<pow(x,i);
    sum+=std::pow(x,i);
  }
  std::cout<<"="<<sum;
}
int main(){
  sumPow(2,10);
}

