#include<iostream>
using namespace std;

class A{
public:
    int x;
    void setX(int val){
        x = val;
    }
    void display(){
        cout<<x;
    }
};

int main(void){
    A a;
    int A::*ptr = &A::x;
    a.*ptr = 20;
    a.display();
}
