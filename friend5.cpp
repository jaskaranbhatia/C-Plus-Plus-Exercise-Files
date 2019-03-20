#include<iostream>
using namespace std;

const int IDLE = 0;
const int INUSE = 1;

class c2;
class c1{
    int status;
public:
    void set_status(int state);
    int idle(c2 b);
};

class c2{
    int status;
public:
    void set_status(int state);
    friend int c1::idle(c2 b);
};

void c1::set_status(int state){
    status = state;
}

void c2::set_status(int state){
    status = state;
}

int c1::idle(c2 b){
    if(status||b.status){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    c1 x;
    c2 y;
    x.set_status(IDLE);
    y.set_status(IDLE);
    cout<<!x.idle(y);
    return 0;
}
