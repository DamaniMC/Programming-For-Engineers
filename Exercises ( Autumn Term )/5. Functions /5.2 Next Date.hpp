#include <iostream>
#include <vector>
std::vector<int> thirtyDays={4,6,9,11};
std::vector<int> thirtyOneDays={1,3,5,7,8,10,12};

int searchVector(int n, const std::vector<int>& vin){
  int index =-1;
  for(int i=0;i<vin.size();i++){
    if(vin[i]==n){
      index = i;
      return index;
    }
  }
  return index;
   
}
bool leap_year(int year){
    bool ly;
 
    if( (year % 4) == 0){ 
        
        
        if( (year % 100) == 0){ 
            
          if((year % 400) ==0){
             std::cout << "This is a leap year" << std::endl;
             ly=true;
            
          }else{
              std::cout << "This is not leap year" << std::endl;
              ly=false;
          }
           
 
        }
        else{ 
            
             std::cout << "This is a leap year" << std::endl;
             ly=true;
        }
    }
    else{
        //
        std::cout << "This is not a leap year" << std::endl;
        ly=false;
    }
 
    return ly;
}
 
std::vector<int> next_date(int d1, int m1, int y1){
    std::vector<int> date = {d1,m1,y1};
    int dateCap;
    int monthCap=12;
    if(searchVector(date[1],thirtyOneDays)!=-1){
        dateCap = 31;
    }else{
      if(searchVector(date[1],thirtyDays)!=-1){
        dateCap =30;
       }else{
          if(date[1]==2){
           if(leap_year(date[2])){
             dateCap=29;
             
           }else{
             dateCap=28;
           }
          }else{
            std::cout<<"A error has occurd with the dates month";
          }
          
        }
      }
    std::cout<<"Date cap is:"<<dateCap<<std::endl;

    if(date[0]<dateCap){
      date[0]+=1;
    }else{
      if(date[1]<monthCap){
        date[0]=1;
        date[1]+=1;
      }
      else{
        date[0]=1;
        date[1]=1;
        date[2]+=1;
      }
    }
 
    // function leap_year is useful for this task
 
    // do not begin to write code straightaway
    // sketch some diagrams first like we did
    // for the leap year task
    return date;
    // (this function should not print anything)
 
}
int intInput(std::string a){
  int b;
  std::cout<<a+"\n";
  std::cin>>b;
  return b;
}
int main(){
    std::cout<<"write a date in format D.M.Y\n";
    int day =intInput("Enter the day: ");
    int month =intInput("Enter the month: ");
    int year =intInput("Enter the year ");
    std::vector nextDate = next_date(day,month,year);
    std::cout<<"The next date is "<<nextDate[0]<<"/"<<nextDate[1]<<"/"<<nextDate[2];
}

