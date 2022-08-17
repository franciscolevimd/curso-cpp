 #include "point_3d.h"

 Point3D::Point3D(float x, float y, float z) : Point(x, y), z_(z) {}

 Point3D::~Point3D() {}

 void Point3D::set_z(float z) { 
    z_ = z; 
}
