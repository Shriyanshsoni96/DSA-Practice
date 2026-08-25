#include<bits/stdc++.h>
using namespace std;
int odd(vector<int>&arr){
    int cnt=0;
    for(int i = 0 ; i<arr.size();i++)
    {
        if(arr[i]%2 !=0)
        {
            cnt++;
        }
    } 
    return cnt;
}
int even(vector<int>&arr){
    int cnt=0;
    for(int i = 0 ; i<arr.size();i++)
    {
        if(arr[i]%2 ==0)
        {
            cnt++;
        }
    } 
    return cnt;
}
int main(){
vector<int> arr={2,3,4,5,6,8,9};
cout<<odd(arr)<<endl;
cout<<even(arr);
return 0;
}