#include <iostream>
 
typedef int listType;
 
// using typedef we can change the type only in one line
// if we want a linked list implementation 
// that works for a different type
 
struct ListNode{
    listType val;
    ListNode* next;
};
listType typeInput(std::string a){
  listType b;
  std::cout<<"\n"+a;
  std::cin>>b;
  return b;
}
ListNode* cons_list(listType e, ListNode* l){
    ListNode* tmp;
 
    tmp = new ListNode;
 
    tmp->val = e;
    tmp->next = l;
 
    return tmp;
}
 
void printList(ListNode* lit){
  std::cout<<"\n< Printing list... >"<<std::endl;
    while(lit != NULL){
        std::cout << lit->val << std::endl;
        lit = lit->next;
    }
}
 
void deallocate_list(ListNode* l){
    ListNode* tmp;
    while(l != NULL){
        tmp = l->next;
        delete l;
        l = tmp;
    }
}
void searchList(ListNode* l){
  ListNode* lit;
  std::cout<<"\n< Searching list... >";
  int target=typeInput("Enter a value you are looking for: ");
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
  //return found;
}
 
ListNode* buildList(){
  ListNode* l;
  std::cout<<"\n< Building list... >";
  int n = typeInput("Enter the number of integers you want to store in the list: ");
  l = NULL;
  ListNode* tmp;
  for(int i=0;i<n;i++){
    
    tmp = new ListNode;
    tmp->val=typeInput("Enter integer Value: ");
    tmp->next=l;
    l=tmp;

  }
  return l;
}
int main(){
    ListNode* l= buildList();
    printList(l);
    searchList(l);
    deallocate_list(l);
}
