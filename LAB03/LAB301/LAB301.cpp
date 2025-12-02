#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentID;
    string studentName;
    int score;

    // Input
    cout << "Enter student ID: ";
    cin >> studentID;

    cout << "Enter student name: ";
    cin >> studentName;

    cout << "Enter score: ";
    cin >> score;

    // Determine grade
    char grade;

    if (score >= 90 && score <= 100) {
        grade = 'A';
    }
    else if (score >= 80) {
        grade = 'B';
    }
    else if (score >= 70) {
        grade = 'C';
    }
    else if (score >= 60) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }

    // Output
    cout << "------ Student Report ------" << endl;
    cout << "Student ID   : " << studentID << endl;
    cout << "Name         : " << studentName << endl;
    cout << endl;
    cout << "Score        : " << score << endl;
    cout << "Grade        : " << grade << endl;
    cout << "-----------------------------" << endl;

    return 0;
}