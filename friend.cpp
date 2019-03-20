#include<iostream>
using namespace std;

class Person{
private:
    int age;
public:
    void setAge(int a)
    {
        age = a;
    }
    friend int getAge(Person person);
};

int getAge(Person person){
    return person.age;
}

int main(void){
    Person karan;
    karan.setAge(19);
    cout<<karan.getAge(karan);
}
