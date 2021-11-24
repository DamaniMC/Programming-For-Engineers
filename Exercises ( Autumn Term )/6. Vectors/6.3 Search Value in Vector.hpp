#include <iostream>
#include <vector>

std::string a[]={"ad","ada","ada","ada",};

void requestElement(std::vector<int> &b){
  std::cout<<"Enter an element for the vector:";
  int a;
  std::cin>>a;
  b.push_back(a);
}
void GenerateVector(std::vector<int> &b){
  int vecSize;
  std::cout<<"Enter size of vector:";
  std::cin>>vecSize;
  for(int i=0;i<vecSize;i++){
    requestElement(b);
  }
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
int main() {
  std::vector<int> v;
  GenerateVector(v);
  int item;
  std::cout<<"Enter a value to search in vectoor: ";
  std::cin>>item;
  std::cout<<"Index of item is "<<searchVector(item,v);
}



