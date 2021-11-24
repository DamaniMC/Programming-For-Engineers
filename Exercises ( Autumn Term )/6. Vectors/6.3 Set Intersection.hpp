
#include <iostream>
#include <vector>

std::string a[]={"ad","ada","ada","ada",};

void requestElement(std::vector<int> &b){
  std::cout<<"Enter an element for the vector:";
  int a;
  std::cin>>a;
  b.push_back(a);
}
void generateVector(std::vector<int> &b){
  int vecSize;
  std::cout<<"Enter size of vector:";
  std::cin>>vecSize;
  for(int i=0;i<vecSize;i++){
    requestElement(b);
  }
}
void returnVector(std::vector<int> b){
  std::cout<<"{";
  for(int i=0;i<b.size();i++){
    std::cout<<b[i]<<",";
  }
  std::cout<<"}";
  
}
int searchVector(int n, const std::vector<int>& vin){
  int index =-1;
  for(int i=0;i<vin.size();i++){
    if(vin[i]==n){
      index = i;
      return index;
      
    }
  }

  return index;
}
void union_vector(const std::vector<int>& vin1, const std::vector<int>& vin2,std::vector<int>& vout){
  for(int i=0;i<vin2.size();i++){
    if(searchVector(vin2[i],vin1)!=-1){
      vout.push_back(vin2[i]);
    }

  }
  
}

int main() {
  std::vector<int> v1,v2,v3;

  generateVector(v1);
  generateVector(v2);
  union_vector(v1,v2,v3);
  std::cout<<"\nVector 1:";
  returnVector(v1);
  std::cout<<"\nVector 2:";
  returnVector(v2);
  std::cout<<"\nSet Intersection:";
  returnVector(v3);
  
}



