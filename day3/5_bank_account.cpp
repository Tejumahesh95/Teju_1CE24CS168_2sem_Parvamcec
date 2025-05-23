c
{
    public:
    string holder_name;
    int ac_no;
    BankAccount(string name, int ac_no)
    {
        cout << "Constructor is automatically" << endl;
        this->holder_name = name;
        this->ac_no = 0;
    }
    BankAccount(BankAccount &b1)
    {
        this->holder_name = b1.holder_name;
        this->ac_no = ac_no;
    
    }
    void display(){ V
        cout << "Holder name: " << this->holder_name << endl;
        cout << "Account number: " << ac_no << endl;
    }
};
int main(){
    BankAccount b1("mohan",102);
    b1.display();
    BankAccount b2 = b1;
    b2.display();
    return 0;
}



