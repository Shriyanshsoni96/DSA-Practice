#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s ;
    s.insert(5);
    s.insert(6);
    s.insert(4);
    s.insert(3);
    s.insert(5);
    s.insert(3);
    s.insert(7);
    s.insert(4);
    s.insert(5);

    for(auto it = s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    // set automatically sort them and only take unique elements 
    s.erase(5);
    for(auto it = s.begin();it!=s.end();it++)
    {