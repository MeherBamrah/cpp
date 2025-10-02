//Design three classes: Student, Exam and Result. The student class has data members such as roll no, name etc. Create a class Exam by inheriting the Student class. The Exam class adds data members representing the marks scored in six subjects. Derive the Result from class Exam and it has its own members such as total marks. Write an interactive program to model this relationship. What type of inheritance this model belongs to?

#include <iostream>
#include <string>
using namespace std;

// Base Class
class Student {
protected:
    int roll_no;
    string name;
public:
    void input_student() {
        cout << "Enter roll number: ";
        cin >> roll_no;
        cin.ignore(); // discard newline
        cout << "Enter name: ";
        getline(cin, name);
    }
    void display_student() {
        cout << "Roll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
    }
};

// Derived from Student
class Exam : public Student {
protected:
    int marks[6];
public:
    void input_marks() {
        cout << "Enter marks for 6 subjects:\n";
        for (int i = 0; i < 6; ++i) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
    void display_marks() {
        for (int i = 0; i < 6; ++i) {
            cout << "Subject " << i + 1 << " Marks: " << marks[i] << endl;
        }
    }
};

// Derived from Exam
class Result : public Exam {
    int total;
public:
    void calculate_total() {
        total = 0;
        for (int i = 0; i < 6; ++i)
            total += marks[i];
    }
    void display_result() {
        display_student();
        display_marks();
        cout << "Total Marks: " << total << endl;
    }
};

int main() {
    Result r;
    r.input_student();
    r.input_marks();
    r.calculate_total();
    r.display_result();
    return 0;
}
