#include<iostream>

#include "punto.h"
#include "estatico.h"
#include "character.h"
#include "triangle.h"

using namespace std;


void modify(Character &p, int attack, int defense) {
	p.attack_ = attack;
	p.defense_ = defense;
}

int main(int argc, char **argv) {
	// float a;
	// float b;
	// float resultado = 0;
	// cout << "Digite el valor de a: "; 
	// cin >> a;
	// cout << "Digite el valor de b: ";
	// cin >> b;
	// resultado = (a/b) + 1;
	// cout.precision(3);
	// cout << "\nEl resultado es: " << resultado << endl;
	// int numbers[] = {1,33,450,6700,90000,100000};
	// for (int i = 0; i<6; i++) {
	// 	cout << numbers[i] << endl;
	// }
	// char name[30];
	// cout << "Dame tu nombre: ";
	// cin.getline(name, 30, '\n');
	// cout << name << endl;
	// Punto *p1 = new Punto();
	// cout << "p1(" << p1->getX() << "," << p1->getY() << ")" << endl;
	// p1->setX(2.34f);
	// p1->setY(3.5f);
	// cout << "p1(" << p1->getX() << "," << p1->getY() << ")" << endl;
	// delete p1;
	// cout << "counter: " << Estatico::getCounter() << endl;
	// Estatico *estatico1 = new Estatico();
	// cout << "counter: " << Estatico::getCounter() << endl;
	// Estatico *estatico2 = new Estatico();
	// cout << "counter: " << Estatico::getCounter() << endl;
	// Estatico *estatico3 = new Estatico();
	// cout << "counter: " << Estatico::getCounter() << endl;
	// Estatico *estatico4 = new Estatico();
	// cout << "counter: " << Estatico::getCounter() << endl;
	// Estatico *estatico5 = new Estatico();
	// cout << "counter: " << Estatico::getCounter() << endl;
	// delete estatico1;
	// cout << "counter: " << Estatico::getCounter() << endl;
	// delete estatico2;
	// cout << "counter: " << Estatico::getCounter() << endl;
	// delete estatico3;
	// cout << "counter: " << Estatico::getCounter() << endl;
	// delete estatico4;
	// cout << "counter: " << Estatico::getCounter() << endl;
	// delete estatico5;
	// cout << "counter: " << Estatico::getCounter() << endl;
	// Character* character = new Character(23, 33);
	// character->showData();
	// modify(*character, 150, 200);
	// character->showData();
	// delete character;
	Triangle *figure = new Triangle(0.3f, 5.2f, 0.0f);
	cout << "figure.vertex: " << figure->total_vertex() << endl;
	figure->showVertex();
	delete figure;
	return 0;
}