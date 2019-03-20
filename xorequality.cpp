#include<iostream>
using namespace std;

int main(void){
    int x,y;
    cout<<"Enter two numbers : ";
    cin>>x>>y;
    if(!(x^y)){
        cout<<"Numbers are equal";
    }
    else{
        cout<<"Numbers are not equal";
    }

}
