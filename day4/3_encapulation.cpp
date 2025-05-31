#include <iostream>
using namespace std;
class Student
{
    private:
    string name;
    int roll_num;
    public:
    string getName()
    {
        return this->name;
    }
    int getRollNum()
    {
        return this->roll_num;
    
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setRollNum(int roll)
    {
        this->roll_num = roll;
    }
};
int main()
{
    Student s1;
    s1.setName("pavan");
    s1.setRollNum(120);
    cout << "Name is: " << s1.getName() << endl;
    cout << "Roll Num is: " << s1.getRollNum() << endl;
    return 0;
}