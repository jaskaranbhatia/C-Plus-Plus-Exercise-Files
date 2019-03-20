#include<iostream>
using namespace std;

class DB;
class DM{
private:
    int meter,centimeter;
public:
    void setDistance(){
        cout<<"Enter in meter : ";
        cin>>meter;
        cout<<"Enter in centimeter : ";
        cin>>centimeter;
    }
    friend void addition(DM& a,DB&
                         .b);
};

class DB{
private:
    int feet,inches;
public:
    void setDistance(){
        cout<<"Enter in feet : ";
        cin>>feet;
        cout<<"Enter in centimeter : ";
        cin>>inches;
    }
    void display(){
        cout<<feet<<endl<<inches;
    }
    friend void addition(DM& a,DB& b);
};

void addition(DM& a,DB& b){
    DB res;
    res.feet = b.feet + (int)a.meter*3.28084;
    res.inches = b.inches + (int)a.centimeter*0.393701;
    res.display();
}

int main(void){
    DM A;
    DB B;
    A.setDistance();
    B.setDistance();
    addition(A,B);
}
