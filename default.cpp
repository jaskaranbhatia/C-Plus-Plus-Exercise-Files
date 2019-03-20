#include<iostream>
using namespace std;

void display(char s = '*'){
    cout<<s<<"\n";
}

void display(char s,int num){
    for(int i=1;i<=num;i++){
        cout<<s;
    }
    cout<<"\n";
}

int main(void){
    cout<<"No argument passed : \n";
    display();
    cout<<"First argument passed : \n";
    display('#');
    cout<<"Both argument passed : \n";
    display('$',3);
}
