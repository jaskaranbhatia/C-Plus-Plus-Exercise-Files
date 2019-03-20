#include<iostream>
using namespace std;

class Object{
private:
    static int count;
public:
    Object(){
        count++;
    }
    static void getCount(){
        cout<<count;
    }
};

int Object::count;

int main(){
    Object o1,o2,o3,o4,o5;
    Object::getCount();
}

