#include<iostream>
using namespace std;

class Arr{
private:
    int *arrN = new int[size];
    int min;
public:
    int size;
    void input(){
        for(int i=0;i<size;i++){
            cin>>arrN[i];
        }
    }
    void min_Num(){
        min = arrN[0];
        for(int i=0;i<size;i++){
            if(arrN[i]<min){
                min = arrN[i];
            }
        }
        cout<<min;
    }
};

int main(void){
    Arr a1;
    cout<<"Enter size of Arrray : ";
    cin>>a1.size;
    a1.input();
    a1.min_Num();
}
