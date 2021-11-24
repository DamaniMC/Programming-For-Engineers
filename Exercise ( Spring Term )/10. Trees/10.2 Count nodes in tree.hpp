

#include <iostream>
 
typedef int tree_t;
 
struct TreeNode{
    tree_t val;
    TreeNode* left;
    TreeNode* right;
};
 
TreeNode* cons_tree(tree_t e, TreeNode* l, TreeNode* r){
    TreeNode* tmp;
    tmp = new TreeNode;
    tmp->val = e;
    tmp->left = l;
    tmp->right = r;
    return tmp;
}
 
TreeNode* ordered_insertion_tree(tree_t e, TreeNode* t){
    if(t == NULL){
        return cons_tree(e, NULL, NULL);
    }
    else if(e < t->val){
        t->left = ordered_insertion_tree(e, t->left);
        return t;
    }
    else{
        t->right = ordered_insertion_tree(e, t->right);
        return t;
    }
}
 
void print_tree(TreeNode* t){
    if(t != NULL){
        print_tree(t->left);
        std::cout << t->val << std::endl;
        print_tree(t->right);
    }
}
 
void deallocate_tree(TreeNode* t){
    if(t != NULL){
        deallocate_tree(t->left);
        deallocate_tree(t->right);
        delete t;
    }
}
bool search_ordered_tree(tree_t e, TreeNode* t){
  if ( t==NULL){
    return false;
  }
  else if( t->val==e){
    return true;
  }
  else if(e<t->val ){
    return search_ordered_tree(e,t->left);
  }
  else if(e>t->val){
    return search_ordered_tree(e,t->right);
  }
}
int count_occurrences_tree(int occurance,tree_t e, TreeNode* t){
  if ( t==NULL){

    return occurance;
  }
  else if( t->val==e){
    
    occurance+=1;
    return count_occurrences_tree(occurance,e,t->right);
  }
  else if(e>t->val){
    return count_occurrences_tree(occurance,e,t->right);
  }
  else if(e<t->val){
    return count_occurrences_tree(occurance,e,t->left);
  }
}

TreeNode* min_element_tree(TreeNode* t){
  if(t->left==NULL){
    return t;
  }
  else{
    return min_element_tree(t->left);
    }
}

int count_nodes_tree(TreeNode* t){
  if(t!=NULL){
    return{
      1+count_nodes_tree(t->right)+count_nodes_tree(t->left)
  };
  }else {
    return 0;
  }
}

int main(){
    TreeNode* t;
    t = NULL;
 
    t = ordered_insertion_tree(7, t);
    t = ordered_insertion_tree(6, t);
    t = ordered_insertion_tree(8, t);
    t = ordered_insertion_tree(4, t);
    t = ordered_insertion_tree(7, t);
    t = ordered_insertion_tree(9, t);
    t = ordered_insertion_tree(71, t);
    t = ordered_insertion_tree(7, t);
    t = ordered_insertion_tree(9, t);
    t = ordered_insertion_tree(71, t);
 
    print_tree(t);
  
    std::cout<<"Min element in tree: "<<min_element_tree(t)<<std::endl<<"Min element in tree val: "<<min_element_tree(t)->val<<std::endl;
    std::cout<<"Num of nodes in tree: "<<count_nodes_tree(t);
    deallocate_tree(t);
 
}
