#include <iostream>
#include "Pet.h"

using namespace std;

class MyClass {
public:
    //public area
    int data = 5;
    void printData() {
        cout << "Data: " << data << endl;
        cout << age << endl;
    }
private:
    //private area
    int age;
    void hidden() {
        cout << "You cannot call me" << endl;
    }
};

class Student {
public:
    string firstname;
    string lastname;
    void print() {
        cout << "Firstname: " << firstname << ", Lastname: " << lastname
            << ", age: " << age << endl;
    }
    void setAge(int myAge) {
        age = myAge;
    }
private:
    int age;
};

int main()
{
    Pet ruffus; //the constructor Pet() is called
    ruffus.name = "RUFFUS";
    ruffus.colour = "BLACK";
    
    Pet claude("CLAUDE", "WHITE");
    claude.print();

    ruffus.bark();

    Student mystudent;
    mystudent.firstname = "Jack";
    mystudent.lastname = "Johnson";
    mystudent.setAge(38);
    mystudent.print();

    /*
    MyClass myObject;
    myObject.data = 10;
    myObject.printData();
    //cout << myObject.age<< endl;          //you cannot call it as it's private
    //cout << myObject.hidden()<< endl;     //you cannot call it as it's private
    */
}

