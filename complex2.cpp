#include<iostream>
using namespace std;

class Complex{
private:
    float real,img;
public:
    void set(float val1,float val2){
        real = val1;
        img = val2;
    }
    void display(){
        cout<<real<<" + i"<<img;
    }
    Complex sum(Complex *c){
        this->real = this->real + c->real;
        this->img = this->img + c->img;
        return *this;
    }
};

int main(void){
    Complex *c1 = new Complex();
    Complex *c2 = new Complex();
    c1->set(3,4);
    c2->set(5,6);
    c1->sum(c2);
    c1->display();
}
