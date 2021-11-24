#include <iostream>
int intInput(std::string a){
  int b;
  std::cout<<a+"\n";
  std::cin>>b;
  return b;
}

bool boolInput(std::string a){
  std::string b;
  std::cout<<a+"\n";
  std::cin>>b;
  if(b=="yes"){
    return true;
  }
  else{
    if(b=="no")
    return false;
    else{
      std::cout<<"Bool output error!";
    }
  }
}

void startGuessing(){}

int main() {
  bool isCorrect=false;
  int lowBound=intInput("Enter lower bound");
  int highBound=intInput("Enter upper bound");
  while(!isCorrect){
    int guess= (lowBound+highBound)/2;
    std::cout<<"I think your number is: "<<guess<<std::endl;
    isCorrect = boolInput("Is the answer correct? yes or no:\n");
    if(isCorrect){
      std::cout<<"Great I guessed correctly";
    }
    else{
      bool isHigher = boolInput("Is your number higher? yes or no:\n");
      if(isHigher){
        lowBound=guess+1;
      }else{
        highBound=guess-1;
      }

    }
  }
    
  
  
}

