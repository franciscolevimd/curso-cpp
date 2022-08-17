#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "figure.h"
#include "point.h"

class Triangle : public Figure {
public:
  Triangle(const Triangle& triangle);
  Triangle(Point v1, Point v2, Point v3);
  ~Triangle();
  void set_v1(Point v1);
  void set_v2(Point v2);
  void set_v3(Point v3);
  void set_vertex(Point v1, Point v2, Point v3);
};

#endif // TRIANGLE_H_