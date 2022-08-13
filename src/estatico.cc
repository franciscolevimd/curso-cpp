#include "estatico.h"


int Estatico::counter = 0;

 int Estatico::getCounter() {
	return Estatico::counter;
}


Estatico::Estatico() {
	Estatico::counter++;
}

Estatico::~Estatico() {
	Estatico::counter--;	
}
