#include <iostream>
#include <string>
#include <algorithm>
#include <list>

int intInput(std::string a){
  int b;
  std::cout<<a+"\n";
  std::cin>>b;
  return b;
}
void print(std::string a){
  std::cout<<a;
}
int main(){
  int sum=0;
  int count=0;
  while(true){
    sum += intInput("Enter a number:");
    count+=1;
    print("The current sum is "+std::to_string(sum)+"\n");
     print("The current average is "+std::to_string(1.0*sum/count)+"\n");
   
  }
}

