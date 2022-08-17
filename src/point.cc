#include "point.h"

using namespace std;

ostream& operator<<(ostream& os, const Point& point) {
    return os << "(" << point.x_ << ", " << point.y_ << ")";
}

Point::Point(const Point& p) {
    operator=(p);
}

Point::Point(float x, float y) : x_(x), y_(y) {}

Point::~Point() {}

void Point::set_x(float x) { 
    x_ = x; 
}

void Point::set_y(float y) { 
    y_= y;
}

Point& Point::operator=(const Point& p) {
    x_ = p.x_;
    y_ = p.y_;
    return *this;
}
