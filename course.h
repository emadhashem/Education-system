#ifndef COURSE_H
#define COURSE_H
#include <string>
using namespace std;
class Course {
private:
    string name;
    int code;
public:
    Course(string, int);
    ~Course();
    void display();
};
#endif // COURSE_H
