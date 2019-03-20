#include<iostream>
using namespace std;

class Shape{
private:
    int x,y;
public:
    Shape(int val1,int val2){
        x = val1;
        y = val2;
    }
    Shape (const Shape &s1){
        x = s1.x;
        y = s1.y;
    }
    void display(){
     cout<<x<<"\n"<<y<<"\n";
    }
};

int main(void){
    Shape s1(2,4);
    Shape s2 = s1;
    s2.display();
}


