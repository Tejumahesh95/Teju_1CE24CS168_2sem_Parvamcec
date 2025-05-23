#include<iostream>
using namespace std;
class BankAccount{
    public:
    string holder_name;
    int ac_no;
    BankAccount(){
        cout << "Counstructor is called automatically" << endl;
    }
};
int main(){
    BankAccount b1;
    return 0;
}
