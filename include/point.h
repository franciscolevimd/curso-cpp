#ifndef POINT_H_
#define POINT_H_

#include<ostream>

class Point {
  friend std::ostream& operator<<(std::ostream& os, const Point& point);
protected:
  float x_;
  float y_;
public:
  Point(const Point &p);
  Point(float x = 0.0f, float y = 0.0f);
  ~Point();
  void set_x(float x);
  inline float x() const { return x_; };
  void set_y(float y);
  inline float y() const { return y_; };
  Point& operator=(const Point& p);
};

#endif // POINT_H_