#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n , c;
    cin>>n>>c;
   vector<int> a(n); 
    for(int i = 0; i < n; i++)
    { 
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int right= n-1;
    int m = a[right]/c;
    int temp=0;
    for(int i = 0; i < n; i++)
    { 
        if(i==0)
        {
            temp=a[i]+m;
            cout<<a[i]<<" ";
        }
        else if(temp =a[i])
        {
            cout<<a[i]<<" ";
            temp=a[i]+m;

        }
        else if(temp<=a[i] && a[i]>temp)
        {
            cout<<a[i]<<" ";
            temp=a[i]+m;
        }
    }   
   
}