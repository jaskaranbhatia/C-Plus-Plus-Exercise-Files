#include<iostream>
using namespace std;

class Static{
private:
    static int count;
public:
    Static(){
        count++;
    }
    void display(){
        cout<<"No of objects are : "<<count;
    }
};

int Static::count;

int main(void){
    Static *s[5];
    for(int i=0;i<3;i++){
        s[i] = new Static();
    }
    s[0]->display();
}
