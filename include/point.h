#ifndef POINT_H_
#define POINT_H_
class Point {
protected:
    float x_;
    float y_;
public:
    Point(float x, float y);
    ~Point();
    void set_x(float x);
    inline float x() const { return x_; };
    void set_y(float y);
    inline float y() const { return y_; };
};
#endif // POINT_H_