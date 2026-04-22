#include<iostream>
using namespace std;
int series(int n)
{   
    
    if(n<=0) 
    {cout<<0;return 0;}
    cout<<n<<endl;
    return series(n-1);
}
int main(){
int n=5;
series(n);

return 0;
}