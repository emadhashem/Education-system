#include "course.h"
#include <iostream>
#include <string>
using namespace std;
Course::Course(string name, int code) {
    this->code = code;
    this->name = name;
}
void Course::display() {
    cout << this->name << " " << this->code << "\n";
}

Course::~Course() {

}
