#include<iostream>
using namespace std;

class Data{
private:
    int arr[10];
    int largest;
public:
    void input(){
        for(int i=0;i<10;i++){
            cin>>arr[i];
        }
    }
    int largest_num(){
        int largest = arr[0];
        for(int i=1;i<10;i++){
            if(arr[i]>largest){
                largest = arr[i];
            }
        }
        return largest;
    }
    void display(){
        cout<<largest_num();
    }
};

int main(){
    Data arr1;
    arr1.input();
    arr1.display();
}
