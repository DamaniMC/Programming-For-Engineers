#include <iostream>

int main() {
  int n;
  std::cin>>n;
  counter=0;
  int max =1;
  while(n!=1){
    counter+=1;
    if(n%2==0){
      n=n/2;
    }else{
      n=3*n+1;
    }
    if(n>max){
      max=n;
    }
    std::cout<<n<<"\n";
  }
  std::cout<<"That required "<<counter<<" steps\n";
  std::cout<<"The maxmimum number was "<<max<<std::endln;

  
}