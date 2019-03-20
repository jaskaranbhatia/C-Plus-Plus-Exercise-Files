#include<iostream>
using namespace std;

class Base{
protected:
    string first_name;
public:
    void getFirstName(){
        getline(cin,first_name);
    }
};

class Derived:public Base{
private:
    string last_name;
    string full_name = "";
public:
    void getLastName(){
        getline(cin,last_name);
    }
    void getFullName(){
        full_name = first_name + " " + last_name;
    }
    void displayName(){
        cout<<full_name;
    }
};

int main(void){
    Derived d1;
    d1.getFirstName();
    d1.getLastName();
    d1.getFullName();
    d1.displayName();
}
