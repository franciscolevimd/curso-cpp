#include "point.h"

Point::Point(float x, float y) : x_(x), y_(y) {}

Point::~Point() {}

void Point::set_x(float x) { 
    x_ = x; 
}

void Point::set_y(float y) { 
    y_= y;
}
