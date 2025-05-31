#include<iostream>
using namespace std;
int main()
{
    int x = 3;
    int y = 4;
    int *p1 = &x;
    int *p2 = &y;
    if(p1 == p2)
    {
        cout << "True" << endl;
    }
    else
    {
        cout "False" << endl;
    }
    *p1 = *p1 * *p1;
    cout << "True" << endl;
    cout << "False" << endl;
    