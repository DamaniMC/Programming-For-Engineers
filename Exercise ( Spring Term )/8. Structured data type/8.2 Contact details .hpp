#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <string>

struct Contact{
  std::string firstname;
  std::string surname;
  std::string email;
  std::string phoneNum;

};

int search_contact(const std::vector<Contact>& contacts, std::string firstname_, std::string surname_){
  for(int i=0;i<contacts.size();i++){
    if(contacts[i].firstname ==firstname_ &&contacts[i].surname==surname_){
      return i; 
    }
  }
  return -1;
  
}

int main(){
  std::ifstream contactsIn;
  std::vector<Contact> contacts;
  contactsIn.open("contacts.txt");
  if(!contactsIn.is_open()){ 
    std::cout << "error opening file" << std::endl;
  }
  else{
    std::cout <<"no error handling file"<< std::endl;
  }
 

  std::string firstTmp;
  std::string surTmp;
  std::string emailTmp;
  std::string phoneTmp;

  Contact a;
  while(contactsIn>>firstTmp){ 
    contactsIn>>surTmp;
    contactsIn>>emailTmp;
    contactsIn>>phoneTmp;
    a.firstname=firstTmp;
    a.surname=surTmp;
    a.email=emailTmp;
    a.phoneNum=phoneTmp;

    contacts.push_back(a);
  }
  for(int i=0;i<contacts.size();i++){
    std::cout<<contacts[i].firstname<<" "<<contacts[i].surname<<" " <<" "<<contacts[i].email<<" "<<contacts[i].phoneNum<<std::endl;
  }
  contactsIn.close();
  std::string searchFirst;
  std::string searchSur;

  std::cout<<"Enter first name: ";
  std::cin>>searchFirst;
  std::cout<<std::endl;
  std::cout<<"Enter surname: ";
  std::cin>>searchSur;
  std::cout<<std::endl;
  std::cout<<"Searching for "+searchFirst+","+searchSur+" in contacts....."<<std::endl<<"Index:"<<search_contact(contacts,searchFirst,searchSur);
}

