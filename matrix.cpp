#include<iostream>
using namespace std;

class Matrix{
private:
    int **arr;
public:
    Matrix(){
        arr = new int*[3];
        for(int i=0;i<3;i++){
            arr[i] = new int[3];
        }
    }
    void input(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>arr[i][j];
            }
        }
    }
    void display(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<arr[i][j];
            }
            cout<"\n";
        }
    }
};

int main(void){
    Matrix m1;
    m1.input();
    m1.display();
    return 0;
}
