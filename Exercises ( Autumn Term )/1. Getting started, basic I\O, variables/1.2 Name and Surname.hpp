#include <iostream>
#include <string>

int main(){
 
    std::string user_name;
 
    std::string user_surname;
    // for a text variable called user_surname
 
    std::cout << "what is your name?\n";
    std::cin >> user_name;
 
    std::cout << "what is your surname?\n";
    // asking for the surname
 
    std::cin>>user_surname;
    // and store it in variable user_surname
 
    std::cout << "hello "+user_name+" "+user_surname+"👋🏿\n";
    // that says hello followed by the
    // name and surname of the user
}