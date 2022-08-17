 #ifndef POINT_3D_H_
 #define POINT_3D_H_
 #include "point.h"

 #include <ostream>

class Point3D : public Point {
  friend std::ostream& operator<<(std::ostream& os, const Point3D& point);
private:
  float z_;
public:
  Point3D(const Point3D& p);
  Point3D(const Point& p);
  Point3D(float x = 0.0f, float y = 0.0f, float z = 0.0f);
  ~Point3D();
  void set_z(float z);
  inline float z() const { return z_; }
  Point3D& operator=(const Point3D& p);
  Point3D& operator=(const Point& p);
};
 
 #endif // POINT_3D_H_
