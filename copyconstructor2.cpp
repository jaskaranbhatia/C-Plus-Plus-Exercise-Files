#include<iostream>
#include<cstring>
using namespace std;

class Person{
private:
    string name;
public:
    Person(string value = "undefined"){
        name = value;
    }
    Person(const Person &a){
        name = a.name;
    }
    void display(){
        cout<<name;
    }
};

int main(void){
    cout<<"Enter name :";
    string name;
    getline(cin,name)
    Person A(name);
    Person B(A);
    B.display();
}
