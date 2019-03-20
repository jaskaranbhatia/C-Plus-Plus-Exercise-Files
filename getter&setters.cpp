#include<iostream>
using namespace std;

class Box{
private:
    float l;
    float b;
    float h;
public:
    void setl(int length);
    void setb(int breadth);
    void seth(int height);
    float getVolume();
};

void Box::setl(int length){
    l=length;
}
void Box::setb(int breadth){
    b=breadth;
}
void Box::seth(int height){
    h=height;
}
float Box::getVolume(){
    return l*b*h;
}

int main(void){
    Box box;
    box.setl(2);
    box.setb(4);
    box.seth(3);
    cout<<box.getVolume();
}
