#include <iostream>
#include<vector>
using namespace std;
int main() {
int n ;
cin>>n;
vector<int>a(n);
for(int j = 0 ; j<n ;j++)
{
    cin>>a[j];
}
int sum=0 ;
for(int i =0 ; i<n; i++)
{
    sum+=a[i];
    cout<<sum<<" ";
}
return 0 ;
}
