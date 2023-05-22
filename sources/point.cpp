#include "Point.hpp"
#include <cmath>


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
    return std::sqrt(x*x + y*y);
}
Point Point::moveTowards(Point& start,Point& end,double dis){
    if(dis < 0)
        throw std::invalid_argument("Value cannot be negative.");
    if(dis >= start.distance(end))
        return end;
    else{
        double totalDistance = start.distance(end);
        double ratio = dis / totalDistance;
        double newX = start.getx() + ratio * (end.getx() - start.getx());
        double newY = start.gety() + ratio * (end.gety() - start.gety());
        return Point{newX,newY};
    }    
}
bool operator==(const Point& lhs, const Point& rhs) {
        return (lhs.getx() == rhs.getx() && lhs.gety() == rhs.gety());
        }