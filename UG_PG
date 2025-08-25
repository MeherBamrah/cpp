//Write a C++ program to create a class called STUDENT with data members Name, Roll Number and Age. Using inheritance, create the classes UG and PG having fields as Semester, Fees and Stipend. Enter the data of 6 students. Find the semester-wise average age for all UG and PG students separately.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class STUDENT {
protected:
    string Name;
    int RollNumber;
    int Age;
public:
    STUDENT(string name="", int roll=0, int age=0): Name(name), RollNumber(roll), Age(age) {}
    int getAge() const { return Age; }
    int getSemester() const { return 0; }
};

class UG : public STUDENT {
    int Semester;
    float Fees;
    float Stipend;
public:
    UG(string name, int roll, int age, int sem, float fees, float stipend) :
        STUDENT(name, roll, age), Semester(sem), Fees(fees), Stipend(stipend) {}
    int getSemester() const { return Semester; }
};

class PG : public STUDENT {
    int Semester;
    float Fees;
    float Stipend;
public:
    PG(string name, int roll, int age, int sem, float fees, float stipend) :
        STUDENT(name, roll, age), Semester(sem), Fees(fees), Stipend(stipend) {}
    int getSemester() const { return Semester; }
};

void computeAvgAge(vector<UG> &ug, vector<PG> &pg) {
    cout << "\nUG Students Semester-wise Avg Age:\n";
    for (int sem = 1; sem <= 2; ++sem) {
        int sum = 0, count = 0;
        for (auto &u : ug)
            if (u.getSemester() == sem) { sum += u.getAge(); count++; }
        if (count > 0) cout << "Semester " << sem << ": " << (float)sum/count << endl;
    }
    cout << "\nPG Students Semester-wise Avg Age:\n";
    for (int sem = 1; sem <= 2; ++sem) {
        int sum = 0, count = 0;
        for (auto &p : pg)
            if (p.getSemester() == sem) { sum += p.getAge(); count++; }
        if (count > 0) cout << "Semester " << sem << ": " << (float)sum/count << endl;
    }
}

int main() {
    vector<UG> ug;
    vector<PG> pg;
    // Example data entry for 3 UG and 3 PG students
    ug.push_back(UG("Alice", 101, 18, 1, 50000, 1000));
    ug.push_back(UG("Bob", 102, 19, 2, 50000, 1000));
    ug.push_back(UG("Ava", 103, 17, 1, 50000, 1000));
    pg.push_back(PG("David", 201, 23, 1, 70000, 2000));
    pg.push_back(PG("Evara", 202, 24, 2, 70000, 2000));
    pg.push_back(PG("Justin", 203, 22, 1, 70000, 2000));

    computeAvgAge(ug, pg);
    return 0;
}
