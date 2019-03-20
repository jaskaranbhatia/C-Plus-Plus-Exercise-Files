#include<iostream>
using namespace std;

class myClass{
    int a,b;
public:
    friend int sum(myClass x);
    void setAB(int x,int y){
        a = x;
        b = y;
    }
};

int sum(myClass x){
    return x.a + x.b;
}

int main(){
    myClass n;
    n.setAB(4,5);
    cout<<sum(n);
}
