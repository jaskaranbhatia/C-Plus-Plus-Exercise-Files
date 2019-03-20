#include<iostream>
using namespace std;

class Box{
private:
    int length;
public:
    Box()
    {
    cout<<"Enter Length : ";
    cin>>length;
    }
    friend void showLength(Box);
};

void showLength(Box b){
    cout<<b.length;
}

int main(){
    Box b;
    showLength(b);
    return 0;
}
