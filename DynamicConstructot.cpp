#include<iostream>
using namespace std;

class Dynamic{
    int *id;
    string *name;
    int *age;
    int *salary;
public:
    Dynamic(){
        int i,a,s;
        string n;
        cin>>i>>n>>a>>s;
        id = new int;
        *id = i;
        age = new int;
        *age = a;
        salary = new int;
        *salary = s;
        name = new string;
        *name = n;
    }
    void disply(){
        cout<<*id<<endl<<*name<<endl<<*age<<endl<<*salary<<endl;
    }
};

int main(void){
    cout<<"Enter No of Employees : ";
    int size;
    cin>>size;
    Dynamic *dyna[size];
    for(int i=0;i<size;i++){
        dyna[i] = new Dynamic();
    }
    for(int i=0;i<size;i++){
        dyna[i]->disply();
    }
}

