#include <iostream>
int factorial(int n){
  if(n==1){
    return n;
  }else{
    return n*factorial(n-1);
  }

}
int main(){
  std::cout<<factorial(4);
}