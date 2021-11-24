
#include <iostream>
#include <cmath>

 
struct point{
    double x;
    double y;
    
    std::string to_s(){
        return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
    }
 
    double distance(point p){
        return std::sqrt(std::pow((x - p.x), 2) + std::pow((y - p.y), 2));
    }
}; 
struct triangle{
  point p1;
  point p2;
  point p3;
  triangle(point p1_,point p2_, point p3_){
    p1 = p1_;
    p2 = p2_;
    p3 = p3_;
  }
   
double perimeter(){
   
  double perimeter = p1.distance(p2)+p2.distance(p3)+p3.distance(p1);

  return perimeter;
}

};
double dist_points(point p1, point p2){
  return std::sqrt(std::pow((p1.x - p2.x), 2) + std::pow((p1.y - p2.y), 2));
}

int main(){
  point p1;
  p1.x,p1.y=0;
  point p3;
  p3.x=0;
  p3.y=2;
  point p2;
  p2.x =2;
  p2.y=0;

  triangle tri(p1,p2,p3);
  std::cout<<tri.perimeter();

}