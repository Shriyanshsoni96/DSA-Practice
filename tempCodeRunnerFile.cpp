#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int n; 
cin>>n;
vector<int>arr(n);
vector<int>sq(n);
for(int i = 0 ; i < n ; i++)
{
    cin>>arr[i];

}
int s=0 ;
for(int o =0 ;o <n ;o++)
{
     s=arr[o]*arr[o];
     sq[o]=s;
     s=0;
}

sort(sq.begin(),sq.end());
for(int i = 0 ; i< n ;i++)
{
    cout<<sq[i]<<" ";
}
return 0;
}