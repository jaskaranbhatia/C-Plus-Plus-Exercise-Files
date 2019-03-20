#include<iostream>
using namespace std;

class Box{
    public:
    float length;
    float bredth;
    float height;
};



int main(void){
    Box box;
    int a,b,c;
    cin>>a>>b>>c;
    box.length = a;
    box.bredth = b;
    box.height = c;
    cout<<"Volume of the box is : "<<box.length*box.bredth*box.height;
}
