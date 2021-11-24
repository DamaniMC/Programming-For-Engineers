#include <iostream>
int intInput(std::string a){
  int b;
  std::cout<<a+"\n";
  std::cin>>b;
  return b;
}


void Collatz(int n){
  int counter=0;
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
    //std::cout<<n<<"\n";
  }

  std::cout<<"For number "<<n<<":\n"<<"That required "<<counter<<" steps\n"<<"The maxmimum number was "<<max<<std::endl;
}

int main() {
  int startNum=intInput("Enter a starting number");
  int endNum=intInput("Enter an end number");
  for(int i = startNum;i<endNum;i++){
    Collatz(i);
  }

  
}
