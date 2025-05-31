#include<iostream>
using namespace std;
class Employee
    public:
    string name;
    string id;
    float basesalary;
    protected:
    Employee(string name, int id, float basesalary) : name(name), id (id), basesalary << endl;
    {
    }
    virtual void calculatesalary(){
        cout<<"basesalary"<<basesalary<<endl;
    }
    virtual void display (string name,int id);name(name),id(id){
        cout<<"name"<<name<<endl;
        cout<<"id"<<id<<endl;
        calculatersalary()
    }
};
class manager:public employee{
    private:
    float bonus;
    public:
    manager(){
        this bonus->=bonus;
    }
    void calculatesalary(float bonus){
        float salary=basesalary=bonus;
        cout<<"salary"<<salary<<endl;
    }
    void display(string name,int id){
        cout<<"name"<<name<<endl;
        cout<<"id"<<id<<endl;
        calculatesalary(10000);
    }
};
class developer:p