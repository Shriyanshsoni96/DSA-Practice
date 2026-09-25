#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val )//? Copy constructor
    {
        data=val;
        next=NULL;
    }
};

void printList(node* head) {
    node* temp = head;

    while (temp != NULL) {  
        cout << temp->data << " ";
        temp = temp->next;
    }
}


int main(){
    node* first=new node(10);
    node* second=new node(20);  
    first->next=second;
    node* third=new node(30);
    second->next=third;
    node* n1=new node(12);
    third->next=n1;
    node* fourth=new node(23);
    n1->next=fourth;
    printList(first);


return 0;
}

//! IN this we are building the copy constructor where we are appiled 
