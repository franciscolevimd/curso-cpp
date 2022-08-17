#include "point_3d.h"

using namespace std;

ostream& operator<<(std::ostream& os, const Point3D& point) {
    return os << "(" << point.x_ << ", " << point.y_ << ", " << point.z_ << ")";
}

Point3D::Point3D(const Point3D& p) {
    operator=(p);
}

Point3D::Point3D(const Point& p) {
    operator=(p);
}

Point3D::Point3D(float x, float y, float z) : Point(x, y), z_(z) {}

Point3D::~Point3D() {}

void Point3D::set_z(float z) { 
    z_ = z; 
}

Point3D& Point3D::operator=(const Point3D& p) {
    Point::operator=(p);
    z_ = p.z_;
    return *this;
}

Point3D& Point3D::operator=(const Point& p) {
    Point::operator=(p);
    z_ = 0.0f;
    return *this;
}