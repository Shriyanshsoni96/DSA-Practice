#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int rosepair(int t)
{
    while(t)
    {
        int n ;
        cin>>n;

        vector<int>arr(n);
        for(int i =0 ; i<n; i++)
        {
            cin>>arr[i];
        }
        int m ; 
        cin>>m;
         
        sort(arr.begin(),arr.end());
        int left=0 , right = n-1;
        int min= INT_MAX;
        int a1=0 , a2=0;
        
        while(left<right)
        {
        int sum= arr[left]+arr[right];
         if(sum==m)
         {
            int diff=arr[right]-arr[left];
            if(diff<min)
            {
                min=diff;
                a1 = arr[left];
                a2 = arr[right];
            }
            left++;
            right--;
         }
         else if(sum<m)
         {
            left++;
         }
         else{
            right--;
         }
        }
        cout<<" Deepak should buy roses whose prices are "<<a1<<"and "<<a2; 
        cout<<endl;
        
    t--;
    
    }
}
int main(){
int test ;
cin>>test;
rosepair(test);
return 0;
}
