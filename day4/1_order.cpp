#include <iostream>
using namespace std;
class Student
{
    private:
    string name;
    public:
    Student(string name)
    {
        this->name = name;
        cout << "Constructor called for : " << this->name << endl;
    }
    ~Student()
    {
        cout << "Destructor called for: " << name << endl;
    }
};
int main()
{
    Student s1("pavan");
    Student s2("darshan");
    Student s3("rohan");
    return 0;
}
