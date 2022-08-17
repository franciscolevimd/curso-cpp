#include<iostream>

#include "point.h"
#include "triangle.h"

using namespace std;

int main(int argc, char **argv) {
	Point v1(1.23f, 45.78f);
	Point v2(2.3f, 12.01f);
	Point v3(0.01f, 0.0f);
	Triangle triangle_1(v1, v2, v3);
	cout << "trinagle_1: " << triangle_1 << endl;
	Point v4(0.23f, 5.8f);
	Point v5(4.03f, 0.01f);
	Point v6(0.0f, 0.0f);
	Triangle triangle_2(triangle_1);
	cout << "trinagle_2: " << triangle_2 << endl;
	triangle_2.set_vertex(v4, v5, v6);
	cout << "trinagle_2: " << triangle_2 << endl;
	return 0;
}