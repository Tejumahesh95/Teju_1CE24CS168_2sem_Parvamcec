#include <iostream>
using namespace std;
class bank{
    private:
    int acc_no;
    public:
    bank(int acc_no){
        this->acc_no=acc_no;
        cout<<"constructor called for:"<<this->acc_no<<endl;
    }
    ~bank(){
        cout<<"destructor called for:"<<acc_no<<endl;
    }
};
int main(){
    bank s1(987654);
    bank s2(456789);
    bank s3(959131);
    return 0;
}