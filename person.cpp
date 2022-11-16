#include "person.h"
#include <bits/stdc++.h>
using namespace std;
Person::Person(string name, int id) {
    this->name = name;
    this->id = id;
}

void Person::display() {
    cout << this->name << " " << this->id << "\n";
}
Person::~Person() {

}
