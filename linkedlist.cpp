#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

class linked_list{
private:
    Node *head,*tail;
public:
    linked_list(){
        head = NULL;
        tail = NULL;
    }
    void add_node(int n){
        Node *tmp = new Node;
        tmp->data = n;
        tmp->next = NULL;
        if(head == NULL){
            head = tmp;
            tail = tmp;
        }
        else{
            tail->next = tmp;
            tail = tail->next;
        }
    }
    void print(){
        Node *tmp = new Node;
        tmp = head;
        while(tmp!=NULL){
            cout<<tmp->data<<endl;
            tmp = tmp->next;
        }
    }
};

int main(void){
    linked_list l1;
    while(1){
        int n;
        cout<<"Welcome to Linked List"<<endl;
        cout<<"----------------------"<<endl;
        cout<<"1.Add an element"<<endl;
        cout<<"2.Display Linked List"<<endl;
        cout<<"3.Exit"<<endl;
        cin>>n;
        switch(n){
            case 1:
                int item;
                cout<<"Enter an element"<<endl;
                cin>>item;
                l1.add_node(item);
                cout<<item<<" : Added to the list"<<endl;
                cout<<"--------------------------"<<endl;
                break;
            case 2:
                cout<<"-----------------------"<<endl;
                cout<<"List is shown below :-> "<<endl;
                l1.print();
                cout<<"-----------------------"<<endl;
                break;
            case 3:
                return 0;
        }
    }
}
