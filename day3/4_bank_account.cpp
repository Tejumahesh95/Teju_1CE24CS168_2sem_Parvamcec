#include <iostream>
using namespace std;
class BankAccount
{
    public:
    string holder_name;
    int ac_no;
    BankAccount()
    {
        cout << "default constructor" << endl;
        this->holder_name = "unknown";
        this->ac_no = 0;
    }
    BankAccount(string name, int ac_n0)
    {
        cout << "Counstructor is called automatically" << endl;
        this->holder_name = name;
        this->ac_no;
    }
    void display()
    {
        cout << "Holder name: " << this->holder_name << endl;
        cout << "Account number: " << ac_no << endl;
    }
};
int main(){
    BankAccount b1;
    BankAccount b2("mohan",102);
    b1.display();
    b2.display();
    return 0;
}



