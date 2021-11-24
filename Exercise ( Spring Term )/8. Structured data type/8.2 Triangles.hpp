
#include <iostream>
#include <cmath>

struct point{
    double x;
    double y;  
    void set_point(double xin,double yin){
      x=xin;
      y=yin;
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

};
double dist_points(point p1, point p2){
  return std::sqrt(std::pow((p1.x - p2.x), 2) + std::pow((p1.y - p2.y), 2));
}
 
double triangle_perimeter(triangle t){
   
  double perimeter = dist_points(t.p1,t.p2)+dist_points(t.p2,t.p3)+dist_points(t.p3,t.p1);

  return perimeter;
}
int main(){
  point testP1;
  testP1.set_point(0,0);
  point testP3;
  testP3.set_point(0,2);
  point testP2;
  testP2.set_point(2,0);

  triangle testTri(testP1,testP2,testP3);
  std::cout<<triangle_perimeter(testTri);

}