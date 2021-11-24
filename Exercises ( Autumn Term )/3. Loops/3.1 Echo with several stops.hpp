#include <iostream>
#include <string>
#include <algorithm>
#include <list>


std::list<std::string> stops= {"stop","STOP","Stop"}; 
bool strInArray(std::string my_var, std::list<std::string> my_list){
  bool found = (std::find(my_list.begin(), my_list.end(), my_var) != my_list.end());
  return found;;
}
int main() {
  std::string word;
  std::string temp;
  while((strInArray(word,stops))==false){
   std::cout << "Please enter one word: ";
   std::cin >> word;
   std::cout << "Your word is: " << word +"\n";}
  std::cout<<"Program finished";
}

