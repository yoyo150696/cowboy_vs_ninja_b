#include "Point.hpp"


using namespace ariel;
using namespace std;

Point::Point(){}
Point::Point(double xlab,double ylab){
    x_label = xlab;
    y_label = ylab;
}
double Point::getx()const{return x_label;}
double Point::gety()const{return y_label;}
double Point::distance(const Point& other){
    double x = x_label - other.getx();
    double y = y_label - other.gety();
    return (x*x + y*y);
}
Point Point::moveTowards(Point& start,Point& end,double dis){
    if(dis >= start.distance(end))
        return end;
    else{
        double x = x_label - end.getx();
        double y = y_label - end.gety();
        double ratio = dis/start.distance(end);
        double addedDistanceX = x * ratio;
        double addedDistanceY = y * ratio;
        return Point{(start.getx()+addedDistanceX),(start.getx()+addedDistanceY)};
    }    
}
bool operator==(const Point& lhs, const Point& rhs) {
        return (lhs.getx() == rhs.getx() && lhs.gety() == rhs.gety());
        }