#include <iostream>
int fib(int n){
  if(n==0){
    return 0;
  }
  if(n==1){
    return 1;
  }
  else{
    return fib(n-1)+fib(n-2);
  }
}

int main(){
  for(int i=0;i<9;i++){
    std::cout<<fib(i)<<",";
  }
}