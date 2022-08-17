 #ifndef POINT_3D_H_
 #define POINT_3D_H_
 #include "point.h"
 class Point3D : public Point
 {
 protected:
    float z_;
 public:
    Point3D(float x, float y, float z);
    ~Point3D();
    void set_z(float z);
    inline float z() const { return z_; }
 };
 
 #endif // POINT_3D_H_
