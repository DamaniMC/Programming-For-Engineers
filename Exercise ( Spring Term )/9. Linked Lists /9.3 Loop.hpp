#include <iostream>
 
struct IntListNode{
    int val;
    IntListNode* next;
};
int intInput(std::string a){
  int b;
  std::cout<<a+"\n";
  std::cin>>b;
  return b;
}
void buildList(){
  std::cout<<"\n< Building list ... >";
  int n = intInput("Enter the number of integers you want to store in the list");
  IntListNode* l;
  l = NULL;
  IntListNode* tmp;

  for(int i=0;i<n;i++){
    
    tmp = new IntListNode;
    tmp->val=intInput("Enter integer Value");
    tmp->next=l;
    l=tmp;

  }
  
  IntListNode* lit;
    lit = l;
 std::cout<<"\n< Printing list ... >";
  //prints each element in the list
    while(lit != NULL){
        std::cout << lit->val << std::endl;
        lit = lit->next;
    }
std::cout<<"\n< Clearning list ... >";
    //Clears out all of the elements in the list
    while(lit != NULL){
        tmp = lit->next;
        delete lit;
        lit = tmp;
    }
    
}
int main(){
        
    buildList();
}