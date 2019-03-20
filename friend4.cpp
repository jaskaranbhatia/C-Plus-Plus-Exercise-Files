#include<iostream>
using namespace std;

class c2;
class c1{
    int x;
public:
    void setX(int value){
        x = value;
    }
    friend int sum(c1 a,c2 b);
};

class c2{
    int y;
public:
    void setY(int value){
        y = value;
    }
    friend int sum(c1 a,c2 b);
};

int sum(c1 a,c2 b){
    return a.x + b.y;
}

int main(){
    c1 a;
    c2 b;
    a.setX(5);
    b.setY(10);
    cout<<sum(a,b);
}
