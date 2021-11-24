#include <iostream>
#include <fstream>
#include <vector>
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
bool searchList(ListNode* lit){
  std::cout<<"\n< Searching list... >";
  listType target=typeInput("Enter a value you are looking for: ");
  bool found = false;
  while(lit != NULL && found != true){
    if(lit->val==target){
      found = true;
    }
    lit = lit->next;
  }
  if(found){
    std::cout<<"Item found in list"<<std::endl;
    
  }else{

    std::cout<<"Item not found"<<std::endl;
  }
  return found;
  //return found;
}
bool searchOrderedList(ListNode* lit){
  std::cout<<"\n< Searching list... >";
  listType target=typeInput("Enter a value you are looking for: ");
  bool found = false;
  while(lit != NULL && found != true){
    if(lit->val==target){
      found = true;
    }
    else if(lit->val>target){
      break;
    }
    lit = lit->next;
  }
  if(found){
    std::cout<<"Item found in list"<<std::endl;
    
  }else{

    std::cout<<"Item not found"<<std::endl;
  }
  return found;
  //return found;
}
int lengthList(ListNode* lit){
  int len=0;
  while(lit!=NULL){
    len+=1;
    lit=lit->next;
  }
  return len;
}
ListNode* buildList(){
  std::ifstream listIn;
  listIn.open("ordered_num.txt");
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

bool replaceElement(listType target,listType replacement,ListNode* lit,bool all){
  bool replaced;
  std::cout<<"\n< Replacing elements in list... >"<<std::endl;
  bool found = false;
  while(lit != NULL){
    if(lit->val==target){
      lit->val=replacement;
      replaced=true;
    }
    lit = lit->next;
  }
  if(replaced){
    std::cout<<"Elements replaced in list"<<std::endl;
  }else{
    std::cout<<"No elements replaced"<<std::endl;
  }
  return replaced;
  //return found;
}

void insertSecond(ListNode*a,ListNode*b){
  b->next=a->next;
  a->next=b;
 
  

}
ListNode* reverseList(ListNode* lit){
    std::cout<<"\n< Reversing elements in list... >"<<std::endl;
  ListNode* tmp=lit;
  ListNode* tmpNext;
  while(tmp->next!=NULL){   
    tmp=tmp->next;
  }
  while(lit!=tmp){
    tmpNext=lit->next;
    insertSecond(tmp,lit);
    lit=tmpNext;
  }
  return tmp;
}
int main(){
    ListNode* l= buildList();
    printList(l);
    searchOrderedList(l);
    std::cout<<"Length of list: "<<lengthList(l);
    replaceElement(typeInput("Enter target element: "),typeInput("Enter its replacement: "),l,true);
    printList(l);
    l = reverseList(l);
    printList(l);
    deallocate_list(l);
}
