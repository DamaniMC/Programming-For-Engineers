#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

int main() {
  std::string word;
  std::string temp;
  while(word!="stop"){
   std::cout << "Please enter one word: ";
   std::cin >> word;
   std::cout << "Your word is: " << word +"\n";}
  std::cout<<"Program finished";
}
