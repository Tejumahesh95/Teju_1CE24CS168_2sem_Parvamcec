#include <iostream>
using namespace std;
class parent{
    public:
    string name;
    parent(string name)
    {
        cout << "Constructor called" << endl;
        this->name = name;
    }
    void display()
    {
        cout << "name of parent: " << name << endl;
    }
};
int main(){
    parent p1("pavan");
    p1 display();
    return 0;
}



