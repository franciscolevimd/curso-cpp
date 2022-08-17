#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "figure.h"

class Triangle : public Figure {
    private:
    float vertex_[3];
    public:
    Triangle(float vertex_1, float vertex_2, float vertex_3);
    ~Triangle();
    void showVertex();
};

#endif // TRIANGLE_H_