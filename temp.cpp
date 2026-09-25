#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val )
    {
        data=val;
        next=NULL;
    }
};

void printlist(node* head)
{
    node* temp = head;
    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){

    //? adding in the head 
    node* first = new node(20);
    node* second = new node(30);
    node* third = new node(40);
    node* fourth = new node(50);
    first->next=second;
    (*second).next=third;
    third->next=fourth;

    node* zero = new node(002);

    zero->next=first;

    printlist(zero);
return 0;
}