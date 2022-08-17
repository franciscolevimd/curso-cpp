#include "figure.h"

#include <iostream>
#include <string>

using namespace std;

ostream& operator<<(std::ostream& os, const Figure& figure) {
    for (int i = 0; i < figure.total_vertex_; i++) {
        os << "v" << i << figure.vertex_[i] << " ";
    }
    return os;
}

Figure::Figure(const Figure &figure) {
    cout << "Figure constructor" << endl;
    operator=(figure);
}

Figure::Figure(unsigned short total_vertex) : total_vertex_(total_vertex) {
    cout << "Figure constructor" << endl;
    vertex_ = new Point[total_vertex_];
}

Figure::~Figure() {
    cout << "Figure destructor" << endl;
    delete [] vertex_;
}

Figure& Figure::operator=(const Figure& other) {
    if (this != &other) {         
        if (vertex_ != 0) {
            delete [] vertex_;
        }
        vertex_ = new Point[other.total_vertex_];
        for (unsigned int i = 0; i < other.total_vertex_; ++i) {
            vertex_[i] = other.vertex_[i];
        }
        total_vertex_ = other.total_vertex_;
    }
    return *this;
}
