#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
};

int main(){
   node* first=new node();
    (*first).data=10;
   node* second=new node();  // 
    (*second).data=20;
    (*first).next=second;
    node* third=new node();
    third->data=23;
    (*second).next=third;
    // cout<< (*first).data;
    cout<<(*second).next;
return 0;
}

//! IN this we are building the baics of the linked list that how we connect and how we need to build this 
