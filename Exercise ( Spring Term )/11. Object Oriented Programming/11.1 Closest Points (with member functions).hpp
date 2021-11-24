#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
 
struct Point{
    double x;
    double y;
 
    std::string to_s() const{
        return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
    }
 
    double distance(Point p) const{
        return std::sqrt(std::pow((x - p.x), 2) + std::pow((y - p.y), 2));
    }
}; 

void closest_points(const std::vector<Point>& vp){
    int index1,index2;
    double shortestDist=vp[0].distance(vp[1]);
    for(int i =0;i<vp.size()-1;i++){
      for(int j=i+1;j<vp.size();j++){
        double tempDist =vp[i].distance(vp[j]);
        if(tempDist<=shortestDist){
          shortestDist = tempDist;
          index1=i;
          index2=j;
          
        }
        std::cout<<"Comapring "<<i<<" and "<<j<<std::endl;
      }
    }
    std::cout<<"Closest points are:\n";
    std::cout<<vp[index1].to_s()<<std::endl;
    std::cout<<vp[index2].to_s()<<std::endl;
    
}
int main(){
    std::ifstream infile;
    infile.open("points.txt");
 
    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
 
    std::vector<Point> points;
    Point tmp;
 
    while(infile >> tmp.x >> tmp.y){
        points.push_back(tmp);
    }
 
    infile.close();
 
    for(int i=0;i<points.size();i++){
      std::cout<<points[i].to_s()<<std::endl;
    }
    closest_points(points);
 
}