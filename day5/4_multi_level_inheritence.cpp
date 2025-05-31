#include<iostream>
using namespace std;
class Person
{
protected:
    string name;
    int age;
    int weight;
public:
    Person(string name, int age, int weight) : name(name), age(age), weight(weight)
    {
        cout << "Person Constructor" << endl;
        this->weight = weight;
    }
};
class Employee : public Person
{
Protected:
    int emp_id;
public:
    Employee(string name, int age, int weight, int emp_id) : Person(name, age, weight), emp_id(emp_id)
    {
        cout << "Employee Constructor" << endl;
    }
};
class Manager : public Employee
{
    int salary;
public:
    Manager(string name, int age, int weight, int emp_id, int salary) : Employee(name, age, weight), emp_id(emp_id), salary(salary)
    {
        cout << "Manager Constructor " << endl;
    }
    void display()
    {
        cout << "Manager details: " << endl;
        cout << "Manager name: " << name << endl;
        cout << "Manager Age: " << age << endl;
        cout << "Manager weight: " << weight << endl;
        cout << "Employee id: " << emp_id << endl;
        cout << "Manager salary: " << salary << endl;
    }
};
int main()
{
    Manager m1("pavan", 23, 60, 103, 20000);
    m1.display();
} 

