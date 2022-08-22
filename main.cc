#include<iostream>

#include "point.h"
#include "triangle.h"
#include "numbers.h"

using namespace std;


int main(int argc, char **argv) {
	cout << "El número mayor entre 9 y 5.1 es " << great_than(9, 5.1) << endl;
	char a = 'a', b = 'b';
	cout << "Valor de a y b antes del intercambio: a = " << a << ", b = " << b << endl;
	swap_data(a, b);
	cout << "Valor de a y b después del intercambio: a = " << a << ", b = " << b << endl;
	return 0;
}