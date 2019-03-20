#include<iostream>
using namespace std;

class Sums{
private:
    int a,b;
    int sum;
public:
    sum_of_num(){
        cin>>a;
        cin>>b;
        sum = a+b;
    }
    display(){
        cout<<sum;
    }
};

int main(){
    Sums s[3];
    for(int i=0;i<3;i++){
        s[i].sum_of_num();
    }
    for(int i=0;i<3;i++){
        s[i].display();
    }
    return 0;
}
