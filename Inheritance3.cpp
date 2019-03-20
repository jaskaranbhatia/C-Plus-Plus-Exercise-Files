#include<iostream>
using namespace std;

class base{
protected:
    int i;
public:
    base(int x){
        i = x;
        cout<<"Constructing Base\n";
    }
    ~base(){
        cout<<"Destructing Base\n";
    }
};

class derived:public base{
    int j;
public:
    derived(int x,int y):base(y){
        j = x;
        cout<<"Constructing Derived\n";
    }
    ~derived(){
        cout<<"Destructing Derived\n";
    }
    void show(){
        cout<<i<<" "<<j<<"\n";
    }
};

int main(){
    derived ob(3,4);
    ob.show();
    return 0;
}
