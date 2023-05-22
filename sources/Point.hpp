#pragma once
#include <iostream>
namespace ariel{
    class Point
    {
        private:
            double x_label;
            double y_label;
        public:
            Point();
            Point(double xlab,double ylab);
            double getx() const;
            double gety() const;
            double distance(const Point& other);
            Point moveTowards(Point& start,Point& end,double dis);
            friend bool operator==(const Point& lhs, const Point& rhs);
            
            };
}
