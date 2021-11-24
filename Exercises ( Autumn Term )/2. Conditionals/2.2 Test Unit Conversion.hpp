#include <iostream>
#include <string>
 
void coutput(double i,std::string a){
  std::cout <<i<< " " << a<< std::endl;
}

int main(){
  
    double length_in, length_out;
    std::string unit_in, unit_out;
 
    // we declare variables for the input and the output
    // the length is a number, the unit name is text
 
    const double mile_to_km = 1.609;
    // useful way to define constants
 
    std::cin >> length_in >> unit_in;
    // we don't print a prompt, we just read the input
 
    if(unit_in == "km"){
        unit_out = "mile";
        length_out = length_in / mile_to_km;
        coutput(length_out,unit_out);
        
    }
    else{ if(unit_in == "mile"){
        unit_out = "km";
        length_out = length_in * mile_to_km;
        coutput(length_out,unit_out);
    }
    else{
      std::cout<<"Incorrrect units. Try again!\n";
      main();
    }}
    
}