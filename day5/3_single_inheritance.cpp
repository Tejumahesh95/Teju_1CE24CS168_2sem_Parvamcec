#include<iostream>
using namespace std;
class Person
{
protected:
    string name;
    int age;
    int weight;
public:
    Person(string name, int age, int weight) : name(name), age(age)
    {
        cout << "Person Constructor" << endl;
        this->weight = weight;
    }
};
class Student : public Person
{
    int roll_num;
public:
    Student(string name, int age, int weight, int roll_num) : Person(name, age, weight), roll_num(roll_num)
    {
        cout << "Student Constructor" << endl;
    }
    void display()
    {
        cout << "Student details: " << endl;
        cout << "Student Name: " << endl;
        cout << "Student Age: " << endl;
        cout << "Student Weight: " << endl;
        cout << "Student Roll Number: " << endl;
    }
};
int main()
{
    Student s1("pavan", 23, 50, 102);
    s1.display();
} 