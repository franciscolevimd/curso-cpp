#ifndef PUNTO_H_
#define PUNTO_H_
class Punto {
private:
	float x_;
	float y_;
public:
	Punto();
	Punto(float x, float y);
	~Punto();
	void setX(float x);
	float getX();
	void setY(float y);
	float getY();
};
#endif // PUNTO_H_