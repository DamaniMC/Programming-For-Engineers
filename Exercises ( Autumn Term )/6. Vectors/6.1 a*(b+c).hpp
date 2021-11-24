#include <iostream>
#include <vector>

std::string a[]={"ad","ada","ada","ada",};

void requestElement(std::vector<int> &b){
  std::cout<<"Enter an element for the vector: ";
  int a;
  std::cin>>a;
  b.push_back(a);
}
int main() {
  std::vector<int> v;

  for(int i=0;i<3;i++){
    requestElement(v);
  }
  std::cout<<v[0]*(v[1]+v[2]);
}


