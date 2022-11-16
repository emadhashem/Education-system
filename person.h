#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>

using namespace std;

class Person {
private :
    string name;
    int id;
public :
    Person(string, int);
    ~Person();
    void display();

};

#endif // PERSON_H
