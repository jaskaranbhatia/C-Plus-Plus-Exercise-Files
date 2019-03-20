#include<iostream>
using namespace std;

class Base{
protected:
    int x;
public:
    void setX(int val){
        x = val;
    }
};

class Derived1:public Base{
protected:
    int y;
public:
    void setY(int val){
        y = val;
    }
};

class Derived2:public Base{
protected:
    int z;
public:
    void setZ(int val){
        z = val;
    }
};

class Derived3:public Derived1,public Derived2{
private:
    int sum;
public:
    void getSum(){
        sum = Derived1::x + y + z;
        cout<<sum;
    }
};


int main(void){
    Derived3 d;
    d.Derived1::setX(20);
    d.setY(40);
    d.setZ(60);
    d.getSum();
}
