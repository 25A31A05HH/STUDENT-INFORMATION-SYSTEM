#include "Student.h"

int main() {
    Student s;
    int choice;

    do {
        cout << "\n===== Student Information System =====\n";
        cout << "1. Add Student Details\n";
        cout << "2. Add Marks\n";
        cout << "3. View Report\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                s.inputDetails();
                break;

            case 2:
                s.inputMarks();
                break;

            case 3:
                s.displayReport();
                break;

            case 4:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}
