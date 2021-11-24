#include <iostream>
#include <string>
 
void coutput(double i,std::string a){
  std::cout <<i<< " " << a<< std::endl;
}

int main(){
  
    double temp_in, temp_out;
    std::string unit_in, unit_out;

 
    std::cin >> temp_in >> unit_in;
    // we don't print a prompt, we just read the input
 
    if(unit_in == "celcius"||unit_in == "C"||unit_in == "Celcius"|| unit_in =="c"){
        unit_out = "F";
        temp_out = (temp_in*9/5) + 32;
        coutput(temp_out,unit_out);
        
    }
    else{ if(unit_in == "farenheit"||unit_in == "F"||unit_in == "Farenheit"||unit_in == "f"){
        unit_out = "C";
        temp_out = (temp_in-32)*(5.0f/9.0f);
        coutput(temp_out,unit_out);
    }
    else{
      std::cout<<"Incorrrect units. Try again!\n";
      main();
    }}
    
}