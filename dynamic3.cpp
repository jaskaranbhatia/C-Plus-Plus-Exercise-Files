#include<iostream>
using namespace std;

class Emp{
private:
    int *id,*age,*salary;
    char *name;
public:
    Emp(){
        id = new int;
        cin>>*id;
        name = new char[50];
        cin>>*name;
        age = new int;
        cin>>*age;
        salary = new int;
        cin>>*salary;
    }
    void display(){
        cout<<*id<<endl<<*name<<endl<<*age<<endl<<*salary;
    }
};

int main(){
    cout<<"Enter no of employee's : ";
    int size;
    cin>>size;
    Emp *e1[size];
    for(int i=0;i<size;i++){
        e1[i] = new Emp();
    }
    for(int i=0;i<size;i++){
        e1[i]->display();
    }
    return 0;
}
