#include<iostream>
using namespace std;

class B;
class A{
private:
    int x;
public:
    void setX(int value){
        x = value;
    }
    friend void swap(A &a,B &b);
};

class B{
private:
    int y;
public:
    void setY(int value){
        y = value;
    }
    friend void swap(A &a,B &b);
};

void swap(A &a,B &b){
    int temp = a.x;
    a.x = b.y;
    b.y = temp;
    cout<<a.x<<"\n"<<b.y;
}

int main(void){
    A a1;
    B b1;
    a1.setX(40);
    b1.setY(20);
    swap(a1,b1);
}

