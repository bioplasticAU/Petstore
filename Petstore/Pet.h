#pragma once
#include <iostream> 
using namespace std;

class Pet {
public:
	string name;
	string colour;
	int age;
	void bark();

	Pet();//constructor, same name of the class
	Pet(string name, string colour);
	void print();
};