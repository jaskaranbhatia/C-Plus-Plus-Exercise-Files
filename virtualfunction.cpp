#include<iostream>
using namespace std;

class Base{
public:
    virtual void func(){
        cout<<"I am in base Class";
    }
};

class Derived:public Base{
public:
    void func(){
        cout<<"I am in derived Class";
    }
};

int main(void){
    Base *ptr;
    Derived d;
    ptr = &d;
    ptr->func();
}
