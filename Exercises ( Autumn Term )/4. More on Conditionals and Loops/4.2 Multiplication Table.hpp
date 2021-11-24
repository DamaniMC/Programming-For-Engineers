#include <iostream>
#include <string>
int multNum;
void generateTable(int n){
  
  for(int i=1;i<=n;i++){
   
    for(int j=1;j<=n;j++){
      std::cout<<i*j<<"\t";
    }
    std::cout<<"\n";
  }

}

int main(){
  
  std::cout<<"Enter a number for a multiplication table ";
  std::cin>>multNum; 
  std::cout<<"\n";
  generateTable(multNum);
  
}




