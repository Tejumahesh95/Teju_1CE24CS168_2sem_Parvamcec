#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    string name;
    int age;
    string gender;

public:
    Person() : name(""), age(0), gender("") {}
    Person(string n, int a, string g) : name(n), age(a), gender(g) {
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }`    
    void setGender(string g) { gender = g; }
    string getName() const { return name; }
    int getAge() const { return age; }
    string getGender() const { return gender; }
    void inputBaseDetails() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();
        cout << "Enter Gender: ";
        getline(cin, gender);
    }
    void displayBaseDetails() const {
        cout << "Name: " << name << "\nAge: " << age << "\nGender: " << gender << endl;
    }
};
class Student : public Person {
private:
    int rollNumber;
    string classGrade;
    string section;

public:
    Student(string n, int a, string g, int r, string c, string s)
        : Person(n, a, g), rollNumber(r), classGrade(c), section(s) {}

    Student() : rollNumber(0), classGrade(""), section("") {}
    void inputStudentDetails() {
        inputBaseDetails();
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cin.ignore();
        cout << "Enter Class Grade: ";
        getline(cin, classGrade);
        cout << "Enter Section: ";
        getline(cin, section);
    }
    void displayStudentDetails() const {
        displayBaseDetails();
        cout << "Roll Number: " << rollNumber << "\nClass Grade: " << classGrade
             << "\nSection: " << section << endl;
    }
};
class Teacher : public Person {
private:
    int employeeId;
    string subject;
    string department;

public:
    Teacher(string n, int a, string g, int id, string sub, string dept)
        : Person(n, a, g), employeeId(id), subject(sub), department(dept) {}

    Teacher() : employeeId(0), subject(""), department("") {}
    void inputTeacherDetails() {
        inputBaseDetails();
        cout << "Enter Employee ID: ";
        cin >> employeeId;
        cin.ignore();
        cout << "Enter Subject: ";
        getline(cin, subject);
        cout << "Enter Department: ";
        getline(cin, department);
    }
    void displayTeacherDetails() const {
        displayBaseDetails();
        cout << "Employee ID: " << employeeID"\nSubject: " << subject << "\nDepartment: " << department << endl;
    }
};
int main(){
    Student s;
    Teacher t;
    cout << "\nEnter Student Details:\n";
    s.inputStudentDetails();
    cout << "\nEnter Teacher Details:\n";
    t.inputTeacherDetails();
    cout << "\nStudent Details:\n";
    s.DisplayStudentDetails();
    cout << "\nTeacher Details:\n";
    return 0;
}
