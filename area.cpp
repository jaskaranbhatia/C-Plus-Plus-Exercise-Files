#include<iostream>
using namespace std;

class Area{
private:
    int l,b,area;
public:
    void getDim(){
        cin>>l>>b;
    }
    void display(){
        area = l * b;
        cout<<area<<endl;
    }
};

int main(){
    Area a1[5];
    for(int i=0;i<5;i++){
        a1[i].getDim();
    }
    for(int i=0;i<5;i++){
        a1[i].display();
    }
    return 0;
}
