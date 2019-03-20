#include<iostream>
using namespace std;

class Student{
    private:
        int height;
    public:
        void setHeight(int h){
            height = h;
        }
        int getHeight(){
            return height;
        }
};


int main(void){
    Student karan;
    karan.setHeight(6);
    cout<<karan.getHeight();
}
