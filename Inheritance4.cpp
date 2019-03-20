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

class Derived1:virtual public Base{
protected:
    int y;
public:
    void setY(int val){
        y = val;
    }
};

class Derived2:virtual public Base{
protected:
    int z;
public:
    void setZ(int val){
        z = val;
    }
};

class Derived3:public Derived1,public Derived2{
protected:
    int sum;
public:
    void add(){
        sum = x + y + z;
        cout<<sum;
    }
};

int main(){
    Derived3 d1;
    d1.setX(2);
    d1.setY(7);
    d1.setZ(30);
    d1.add();
}
