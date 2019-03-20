#include<iostream>
using namespace std;

class B;
class A{
private:
    int a;
public:
    void setA(){
        cin>>a;
    }
    friend void swap(A&,B&);
};

class B{
private:
    int b;
public:
    void setB(){
        cin>>b;
    }
    friend void swap(A&,B&);
};

void swap(A &a1,B &b1){
    int temp = a1.a;
    a1.a = b1.b;
    b1.b = temp;
    cout<<a1.a<<"\n"<<b1.b;
}

int main(){
    A a;
    B b;
    a.setA();
    b.setB();
    swap(a,b);
    return 0;
}
