#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int roll_num;
    string class_name;
    int marks;

public:
    Student(string n, int r, string c, int m) {
        name = n;
        roll_num = r;
        class_name = c;
        marks = m;
    }
    string getGrade() {
        if (marks > 90 && marks <= 100)
            return "A+";
        else if (marks > 80 && marks <= 90)
            return "A";
        else if (marks > 70 && marks <= 80)
            return "B+";
        else if (marks > 60 && marks <= 70)
            return "B";
        else if (marks > 50 && marks <= 60)
            return "C+";
        else if (marks > 40 && marks <= 50)
            return "C";
        else
            return "F";
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_num << endl;
        cout << "Class: " << class_name << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << getGrade() << endl;
    }
};

int main() {
    Student s("mohan", 101, "10th Grade", 87);
    s.display();

    return 0;
}