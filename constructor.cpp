#include<iostream>
using namespace std;

class Student{
    public:
    Student();
};

Student::Student(){
    cout<<"I am A Constructor";
}

int main(void){
    Student john;
}
