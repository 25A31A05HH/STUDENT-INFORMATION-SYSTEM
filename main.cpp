#include "Student.h"
#include <vector>

int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\n===== Student Information System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Add Marks to Student\n";
        cout << "3. View All Reports\n";
        cout << "4. Search Student by ID\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

            case 1: {
                Student s;
                s.inputDetails();
                students.push_back(s);
                cout << "Student added successfully!\n";
                break;
            }

            case 2: {
                int id;
                cout << "Enter Student ID: ";
                cin >> id;

                bool found = false;
                for (auto &s : students) {
                    if (s.getID() == id) {
                        s.inputMarks();
                        found = true;
                        break;
                    }
                }

                if (!found) cout << "Student not found!\n";
                break;
            }

            case 3: {
                for (auto &s : students) {
                    s.displayReport();
                }
                break;
            }

            case 4: {
                int id;
                cout << "Enter Student ID: ";
                cin >> id;

                bool found = false;
                for (auto &s : students) {
                    if (s.getID() == id) {
                        s.displayReport();
                        found = true;
                        break;
                    }
                }

                if (!found) cout << "Student not found!\n";
                break;
            }

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}
