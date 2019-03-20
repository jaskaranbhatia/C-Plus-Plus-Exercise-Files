#include<iostream>
using namespace std;

class Arr{
    int *arr = new int[size];
public:
    int size;
    void input(){
        for(int i=0;i<size;i++){
            cin>>*(arr+i);
        }
    }
    void min(){
        int min = *arr;
        for(int i=0;i<size;i++){
            if(*(arr+i)<min){
                min = *(arr+i);
            }
        }
        cout<<min;
    }
};

int main(void){
    Arr a1;
    cout<<"Enter size of the array : "<<endl;
    cin>>a1.size;
    a1.input();
    a1.min();
}
