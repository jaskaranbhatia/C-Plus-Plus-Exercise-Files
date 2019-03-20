#include<iostream>
using namespace std;

class person{
public:
    void sayHello();
};

void person::sayHello(){
    cout<<"Hello World";
}

int main(void){
    person anil;
    anil.sayHello();
}
