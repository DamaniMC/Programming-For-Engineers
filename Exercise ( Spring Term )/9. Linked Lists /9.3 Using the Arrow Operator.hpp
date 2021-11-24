#include <iostream>
 
struct IntListNode{
    int val;
    IntListNode* next;
};
 
int main(){
    IntListNode* l;
    l = NULL; // 1 
 
    IntListNode* tmp; // 2
 
    tmp = new IntListNode; // 3 
    tmp->val = 2; // 4 
    tmp->next = l; // 5 
 
    l = tmp; // 6 
 
    tmp = new IntListNode; // 7
    tmp->val = 3; // 8
    tmp->next = l; // 9
 
    l = tmp; // 10
 
    IntListNode* lit;
    lit = l;
 
  //prints each element in the list
    while(lit != NULL){
        std::cout << lit->val << std::endl;
        lit = lit->next;
    }
    std::cout<<"==< End of List >=="<<std::endl;

    tmp = new IntListNode;
    tmp->val = 4;
    tmp->next = l;
    l=tmp;
    lit = l;
  
    while(lit!=NULL){
      std::cout<<lit->val<<std::endl;
      lit = lit->next; 
    }
    std::cout<<"==< End of List >=="<<std::endl;

    //Clears out all of the elements in the list
    while(lit != NULL){
        tmp = lit->next;
        delete lit;
        lit = tmp;
    }
    
}