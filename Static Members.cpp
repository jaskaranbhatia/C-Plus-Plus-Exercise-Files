#include<iostream>
using namespace std;

class Object{
private:
    static int count;
public:
    Object(){
        count++;
    }
    void getCount(){
        cout<<count;
    }
};

int Object::count;

int main(void){
    Object o1,o2,o3,o4;
    o1.getCount();
}
