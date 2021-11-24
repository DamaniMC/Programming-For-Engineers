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

void vectMin(std::vector<int> &b){
  //arbitrarily high number
  int min=2147483647;
  for(int i=0;i<b.size();i++){
    if(b[i]<min){
      min=b[i];
    }
  }
   std::cout<<"Minimum value in vector:{"<<min<<"}";
}
int main() {
  std::vector<int> v;
  GenerateVector(v);
  vectMin(v);
}



