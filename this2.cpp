#include<iostream>
using namespace std;

class A{
    int x;
public:
    void setX(int val){
        this->x = val;
    }
    A& copy_obj(){
        return *this;
    }
    void display(){
        cout<<x;
    }
};


int main(void){
    A a1,a2;
    a1.setX(20);
    a2 = a1.copy_obj();
    a2.display();
}
