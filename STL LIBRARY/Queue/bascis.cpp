#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>qe;
    qe.push(10);
    qe.push(20);
    qe.push(130);
    qe.push(103);
    qe.push(14);
    qe.push(15);
    qe.push(156);
    qe.push(17);

    

    cout<<qe.front();
    cout<<qe.back();
}