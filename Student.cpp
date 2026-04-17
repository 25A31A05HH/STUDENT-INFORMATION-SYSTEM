#include "Student.h"

void Student::inputDetails() {
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter ID: ";
    cin >> id;
}

void Student::inputMarks() {
    marks.resize(3);
    cout << "Enter marks for 3 subjects: ";
    for (int i = 0; i < 3; i++) {
        cin >> marks[i];
    }
}

float Student::calculateAverage() {
    float sum = 0;
    for (int m : marks) sum += m;
    return sum / marks.size();
}

string Student::getGrade(float avg) {
    if (avg >= 90) return "A+ (Excellent)";
    else if (avg >= 80) return "A (Very Good)";
    else if (avg >= 70) return "B (Good)";
    else if (avg >= 60) return "C (Average)";
    else if (avg >= 50) return "D (Below Average)";
    else return "F (Fail)";
}

void Student::displayReport() {
    float avg = calculateAverage();

    cout << "\n--- Student Report ---\n";
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Average: " << avg << endl;
    cout << "Grade: " << getGrade(avg) << endl;
}

int Student::getID() {
    return id;
}
