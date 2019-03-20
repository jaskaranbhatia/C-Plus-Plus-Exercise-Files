#include<iostream>
using namespace std;

class base{
public:
    void display1(){
        cout<<"\nBase Class Content";
    }
};

class derived:public base{
public:
    void display2(){
        cout<<"\n1st derived class content";
    }
};

class derived2:public derived{
public:
    void display3(){
        cout<<"2nd derived class content";
    }
};

int main(){
    derived2 D;
    D.display3();
    D.display2();
    D.display1();
}
