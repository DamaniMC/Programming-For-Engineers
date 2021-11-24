#include <iostream>
#include <string>

int main(){
 
    float length;
    float width;

    std::cout << "What is the length of your rectangle? ";
    std::cin >> length;
    std::cout << "What is the width of your rectangle? ";
    std::cin >> width;
    float perimeter = 2*(length+width);
    float area = length*width;
    std::cout << "Area = "<<area<<", Perimeter = "<<perimeter;
    
}