#include<iostream>
#include<cstring>
using namespace std;

class example{
    char *name;
    int length;
public:
    example(){
        length = 0;
        name = new char[length+1];
    }
    example(char *e){
        length = strlen(e);
        name = new char[length+1];
        strcpy(name,e);
    }
    void display(){
        cout<<name;
    }
};

int main(){
    char *a = "Hello World";
    example e1(a);
    e1.display();
    return 0;
}
