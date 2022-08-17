#ifndef FIGURE_H_
#define FIGURE_H_

#include <ostream>
#include "point.h"

class Figure {
  friend std::ostream& operator<<(std::ostream& os, const Figure& figure);
protected:
  unsigned short total_vertex_;
  Point* vertex_;
public:
  Figure(const Figure& figure);
  Figure(unsigned short total_vertex = 3);
  ~Figure();
  inline unsigned short total_vertex() const { return total_vertex_; }
  Figure& operator=(const Figure& other);
};

#endif // FIGURE_H_
