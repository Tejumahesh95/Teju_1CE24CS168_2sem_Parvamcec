#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    cout << "Address of a: " << &a << endl;
    int *ptr = &a;
    cout << "Ptr value: " << ptr << endl;
    cout << "Ptr Address: " << &ptr << endl;
    cout << "Value of using a: " << a << endl;
    cout << "Value of a using ptr: " << ptr << endl;
    return 0;
}