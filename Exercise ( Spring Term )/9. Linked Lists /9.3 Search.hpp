#include <iostream>
 
struct IntListNode{
    int val;
    IntListNode* next;
};
int intInput(std::string a){
  int b;
  std::cout<<"\n"+a;
  std::cin>>b;
  return b;
}
void buildList(){
    std::cout<<"\n< Building list... >";
  int n = intInput("Enter the number of integers you want to store in the list: ");
  IntListNode* l;
  l = NULL;
  IntListNode* tmp;

  for(int i=0;i<n;i++){
    
    tmp = new IntListNode;
    tmp->val=intInput("Enter integer Value: ");
    tmp->next=l;
    l=tmp;

  }

  IntListNode* lit;
    lit = l;
   std::cout<<"\n< Printing list... >";
  //prints each element in the list
    while(lit != NULL){
        std::cout << lit->val << std::endl;
        lit = lit->next;
    }

    //Clears out all of the elements in the list
    
  std::cout<<"\n< Searching list... >";
  int target=intInput("Enter a value you are looking for: ");
  bool found = false;
  lit = l;
  while(lit != NULL && found != true){
    if(lit->val==target){
      found = true;
    }
    lit = lit->next;
  }
  if(found){
    std::cout<<"Item found in list";
  }else{
    std::cout<<"Item not found";
  }


  while(lit != NULL){
        tmp = lit->next;
        delete lit;
        lit = tmp;
    }
}
int main(){
        
    buildList();
}