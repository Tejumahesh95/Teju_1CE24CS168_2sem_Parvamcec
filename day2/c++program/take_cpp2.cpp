#include <iostream>
#include <string>
using namespace std;
int main(){
    int age = 0;
    float marks =0;
    char gender;
    string name = "";
    cout << "Enter a student age: " << endl;
    cin >> age;
    cout << "Enter a marks of student: " << endl;
    cin >> marks;
    cout << "Enter a student gender: " << endl;
    cin >> gender;
    cout << "Enter a student name: " << endl;
    cin >> name;
    cout << "student details: " << endl;
    cout << "Name: " << name << endl;
    cout << "gender: " << gender << endl;
    cout << "Age: " << age << endl;
    cout << "Marks: " << marks << endl;
    return 0;
}
