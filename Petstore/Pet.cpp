#include "Pet.h"

void Pet::bark() {
	cout << "Woof" << endl;
}

Pet::Pet() {
	name = "UNKNOWN";
	colour = "TRANSPARENT";
	cout << "Constructor was called" << endl;
}

Pet::Pet(string name1, string colour1) {
	name = name1;
	colour = colour1;
}

void Pet::print() {
	cout << "Name: " << name << ", Colour: " << colour << endl;
}