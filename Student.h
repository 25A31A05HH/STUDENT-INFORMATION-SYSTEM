#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <vector>
using namespace std;

class Student {
private:
    string name;
    int id;
    vector<int> marks;

public:
    void inputDetails();
    void inputMarks();
    void displayReport();
    float calculateAverage();
};

#endif
