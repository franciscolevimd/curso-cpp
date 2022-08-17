#include "triangle.h"

#include <iostream>

using namespace std;

Triangle::Triangle(const Triangle& triangle) {
    cout << "Triangle constructor" << endl;
    Figure::operator=(triangle);
}

Triangle::Triangle(Point v1, Point v2, Point v3) : Figure(3) {
    cout << "Triangle constructor" << endl;
    set_vertex(v1, v2, v3);
}

Triangle::~Triangle() {
    cout << "Triangle destructor" << endl;
}

void Triangle::set_v1(Point v1) {
    vertex_[0] = v1;
}

void Triangle::set_v2(Point v2) {
    vertex_[1] = v2;
}

void Triangle::set_v3(Point v3) {
    vertex_[2] = v3;
}

void Triangle::set_vertex(Point v1, Point v2, Point v3) {
    vertex_[0] = v1;
    vertex_[1] = v2;
    vertex_[2] = v3;
}
