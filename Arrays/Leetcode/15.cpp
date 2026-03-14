#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> ans;
    int n = 5;
int a[]={-1,0,1,2,-1,-4};
int i , j,k;

for(int i=0;i<n;i++)
{  
    if(i>0 and a[i]==a[i-1])
    {
        continue;
    }
    int j = i+1;
    int k = n-1;
while(j<k)
{
    int sum =a[i]+a[j]+a[k];
    if(sum==0)
    {
        ans.push_back({a[i],a[j],a[k]});
        j++;
        k--;
       while(j<k and a[j]==a[j-1])
       {
        j++;
       }
    }
    else if(sum<0)
    {
        j++;
    }
    else{
        k--;
    }
}

}


}