#include "character.h"

#include<iostream>

using namespace std;


Character::Character(int attack, int defense) {
	attack_ = attack;
	defense_ = defense;
}


Character::~Character() {}


void Character::showData() {
	cout << "Attack: " << attack_ << endl;
	cout << "Defense: " << defense_ << endl;
}