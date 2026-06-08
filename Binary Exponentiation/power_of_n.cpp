#include<iostream>
using namespace std;
int main(){
int x=3;
int ans;
while(x>0)
{
    ans = x%2;
    cout<<ans<<endl;
    x/=2;
    cout<<x<<endl;
}
return 0;
}