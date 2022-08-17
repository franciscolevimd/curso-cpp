#include "triangle.h"

#include <iostream>

using namespace std;

Triangle::Triangle(float vertex_1, float vertex_2, float vertex_3) : Figure(3) {
    vertex_[0] = vertex_1;
    vertex_[1] = vertex_2;
    vertex_[2] = vertex_3;
    cout << "Triangle constructor" << endl;
}

Triangle::~Triangle() {
    cout << "Triangle destructor" << endl;
}

void Triangle::showVertex() {
    cout << "(" << vertex_[0] << "," << vertex_[1] << "," << vertex_[2] << ")" << endl;
}