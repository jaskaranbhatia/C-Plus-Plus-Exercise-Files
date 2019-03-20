#include<iostream>
using namespace std;

class dist{
private:
    int feet;
    int inch;
public:
    void getDistance();
    void showDistance();
};

void dist::getDistance(){
    cout<<"The distance in feet and inches : ";
    cin>>feet>>inch;
}

void dist::showDistance(){
    cout<<"Distance in feet is : "<<feet<<endl;
    cout<<"Distance in inch is : "<<inch<<endl;
}

int main(void){
    dist s;
    s.getDistance();
    s.showDistance();
}
