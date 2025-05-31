#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int roll_num;
    public:
    Student(string name, int roll) : name(name), roll_num(roll)
    {
        cout << "Constructor is called " << endl;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll number: " << roll_num << endl;
    
    }
};
int main()
{
    Student s1("pavan", 102);
    s1.display();
}

