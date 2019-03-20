#include<iostream>
using namespace std;

class Emp{
private:
    int emp_id;
    char emp_name[50];
    int emp_age;
    int emp_salary;
public:
    void inputInfo(){
        cin>>emp_id>>emp_name>>emp_age>>emp_salary;
    }
    void displayInfo(){
        cout<<emp_id<<endl<<emp_name<<endl<<emp_age<<endl<<emp_salary<<endl;
    }
};

int main(void){
    int n;
    cout<<"Enter no of employee's"<<endl;
    cin>>n;
    Emp e1[n];
    for(int i=0;i<n;i++){
        e1[i].inputInfo();
    }
    for(int i=0;i<n;i++){
        e1[i].displayInfo();
    }

}
