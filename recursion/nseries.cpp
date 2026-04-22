#include<iostream>
using namespace std;
int series(int n)
{   
    cout<<n<<endl;
    if(n==0) return 0;
    return series(n-1);
}
int main(){
int n=5;
series(n);

return 0;
}