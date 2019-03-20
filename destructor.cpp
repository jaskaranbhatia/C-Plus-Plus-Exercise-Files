#include<iostream>
using namespace std;

class Student{
    public:
    Student(){
        cout<<"I am Constructor\n";
    }
    //Below is a destructor
    ~Student(){
        cout<<"I am Destructor";
    }
};

int main(){
    Student john;
}
