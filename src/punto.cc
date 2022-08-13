#include "punto.h"


Punto::Punto() {
	x_ = 0.0f; 
	y_ = 0.0f;
}

Punto::Punto(float x, float y) {
	x_ = x; 
	y_ = y;
}

Punto::~Punto() {}

void Punto::setX(float x) {
	x_ = x;
}

float Punto::getX() {
	return x_;
}

void Punto::setY(float y) {
	y_ = y;
}

float Punto::getY() {
	return y_;
}
