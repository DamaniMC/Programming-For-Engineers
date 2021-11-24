#include <iostream>
#include <fstream>
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
  listType target=typeInput("Enter a value you are looking for: ");
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
  std::ifstream listIn;
  listIn.open("input.txt");
  if(!listIn.is_open()){ 
    std::cout << "error opening file" << std::endl;
  }
  else{
    std::cout <<"no error handling file"<< std::endl;
  }
  ListNode* l;
  std::cout<<"\n< Building list... >";
  l = NULL;
  ListNode* tmp;
  listType textTmp;
  while(listIn>>textTmp){
    tmp = new ListNode;
    tmp->val=textTmp;
    tmp->next=l;
    l=tmp;

  }
  listIn.close();
  return l;
}
int main(){
    ListNode* l= buildList();
    printList(l);
    searchList(l);
    deallocate_list(l);
}
