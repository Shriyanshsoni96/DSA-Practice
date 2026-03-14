#include<iostream>
using namespace std;
int main(){
int numb,numex;
cin>>numb>>numex;
int ans=numb;
while(numb>=numex)
{
    int newbt=numb/numex;
    int rbt=numb%numex;
    ans=ans+newbt;
    numb=rbt+newbt;
}
cout<<ans;
}