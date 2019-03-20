#include<iostream>
using namespace std;

class Employee{
private:
    int id;
    char name[50];
    int age;
    int salary;
public:
    void InputInfo(){
        cout<<"Enter your id : "<<endl;
        cin>>id;
        cout<<"Enter your name : "<<endl;
        cin>>name;
        cout<<"Enter your age : "<<endl;
        cin>>age;
        cout<<"Enter your salary : "<<endl;
        cin>>salary;
    }
    void displayInfo(){
        cout<<id<<endl<<name<<endl<<age<<endl<<salary<<endl;
    }
};

int main(){
    cout<<"Enter no of employees : ";
    int size;
    cin>>size;
    Employee emp[size];
    for(int i=0;i<size;i++){
        emp[i].InputInfo();
    }
    cout<<"-----------------------"<<endl;
    cout<<"List of employees is : "<<endl;
    for(int i=0;i<size;i++){
        cout<<"-----------------------"<<endl;
        emp[i].displayInfo();
    }
    return 0;
}
