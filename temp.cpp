#include<iostream>
#include<numeric>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
vector<int> arr={10,20,30,40};
int k = 2; 

int sum = accumulate(arr.begin(),arr.end(),0);
int right= sum ;
int left = *max(arr.begin(),arr.end());
int ans = 0 ;
while(left<right)
{
    int mid= left+ (right-left)/2;
    if(ispossible(k , arr, mid))
    {
        ans= mid;
        right = mid-1;
    }
    else
    {
        
        left = mid+1; 
    }
}

return 0;
}