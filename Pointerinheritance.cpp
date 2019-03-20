#include<iostream>
using namespace std;

class man{
public:
    string name;
    int age;
};

class bacha{
public:
    int stars;
    man *m1;
};

int main(void){
    man *m;
    bacha *b1 = new bacha;
    b1->stars = 5;
    cin>>m->name;
    cin>>m->age;
    b1->m1 = m;
    cout<<"<------------------------------>\n";
    cout<<b1->m1->name<<endl;
    cout<<b1->m1->age;
}
