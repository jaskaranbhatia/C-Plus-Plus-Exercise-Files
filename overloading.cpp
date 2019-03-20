#include<iostream>
#include<cmath>
using namespace std;

class Triangle{
private:
    double area;
public:
    Triangle(double a){
        area = sqrt(3)/4*a*a;
    }
    Triangle(double a,double b){
        area = (b/4)*sqrt(4*a*a - b*b);
    }
    Triangle(double a,double b,double c){
        double s = (a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
    }
    void display(){
        cout<<area;
    }
};

int main(void){
    Triangle t1(5,4,3);
    t1.display();
}
