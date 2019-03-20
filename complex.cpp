#include<iostream>
using namespace std;

class Complex{
private:
    float real,img;
public:
    Complex(int val){
        this->real = val;
        this->img = 0;
    }
    Complex(int val1,int val2){
        this->real = val1;
        this->img = val2;
    }
    void display(){
        cout<<real<<" + i"<<img<<"\n";
    }
    Complex sum(Complex *c){
        this->real = this->real + c->real;
        this->img = this->img + c->img;
    }
};

int main(void){
    Complex c1(3,7);
    Complex *c2 = new Complex(4);
    c1.sum(c2);
    c1.display();
}
