#include <iostream>

class MyClass(){
  public:   
    int myNum;
    std::string myString;

};

//method outside the class
void MyClass::myFunction(){
  std::cout<<"Hello World";

}

int main(){
  MyClass obj;
  obj.myNum=2;
  obj.myFunction();
  
}