#include<iostream>
using namespace std;
class Person
{
    string name;
    int age;
public:
    Person(string name, int age) : name(name), age(age)
    {
    }
    void display_person()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student : public Person
{
    int roll_num;
public:
    Student(string name, int age, int roll_num) : Person(name, age), roll_num(roll_num)
    {
    }
    void display_student()
    class Teacher : public Person
    {
        int salary;
    public:
         Teacher(string name, int age, int salary) : Person(name, age), salary(salary)
         {