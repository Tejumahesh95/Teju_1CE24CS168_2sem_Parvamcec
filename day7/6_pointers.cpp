#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;
    *ptr = 101;
    
    int b = 20;
    ptr = &b;
    *(&(*ptr)) = 30;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    return 0;
}