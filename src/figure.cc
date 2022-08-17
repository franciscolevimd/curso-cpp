#include "figure.h"

#include <iostream>

using namespace std;

Figure::Figure(unsigned short total_vertex) : total_vertex_(total_vertex) {
    cout << "Figure constructor" << endl;
}

Figure::~Figure() {
    cout << "Figure destructor" << endl;
}

void Figure::set_total_vertex(unsigned short total_vertex) {
    total_vertex_ = total_vertex;
}