#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <vector>
#include <cstdlib>
 
struct Point{
    double x;
    double y;

  
};
 
double distance_points(Point p1, Point p2){
    return std::sqrt(std::pow((p1.x - p2.x), 2) + std::pow((p1.y - p2.y), 2));
}
 
std::string point_to_s(Point p){
    return "(" + std::to_string(p.x) + ", " + std::to_string(p.y) + ")";
}

void closest_points(const std::vector<Point>& vp){
    int index1,index2;
    double shortestDist=distance_points(vp[0],vp[1]);
    for(int i =0;i<vp.size()-1;i++){
      for(int j=i+1;j<vp.size();j++){
        double tempDist =distance_points(vp[i],vp[j]);
        if(tempDist<=shortestDist){
          shortestDist = tempDist;
          index1=i;
          index2=j;
          
        }
        std::cout<<"Comapring "<<i<<" and "<<j<<std::endl;
      }
    }
    std::cout<<"Closest points are:\n";
    std::cout<<point_to_s(vp[index1])<<std::endl;
    std::cout<<point_to_s(vp[index2])<<std::endl;
    
}
 
int main(){
  std::vector<Point> points;
  std::ifstream pointsIn;
  pointsIn.open("points.txt");
  if(!pointsIn.is_open()){ 
    std::cout << "error opening file" << std::endl;
  }
  else{
    std::cout <<"no error handling file"<< std::endl;
  }
 
  double xtmp;
  double ytmp;
  Point a;
  int i = 0;

  //Imports from the textfile to the points vecors
  while(pointsIn>>xtmp){
    pointsIn>>ytmp; 
    a.x=xtmp;
    a.y=ytmp;
    points.push_back(a);

  }


  
  
  if(points.size() == 0){
      std::cout << "there are no points in the file" << std::endl;
  }
  else if(points.size() == 1){
      std::cout << "there is only one point in the file" << std::endl;
  }
  else{
      for(int i=0;i<points.size();i++){
        std::cout << point_to_s(points[i])<<std::endl;
      }
      closest_points(points);

  }
  
}