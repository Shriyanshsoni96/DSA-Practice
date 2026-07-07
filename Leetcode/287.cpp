#include<iostream>
// #include<stdc++>
#include<vector>
#include<map>

using namespace std;
int main(){
vector<int> nums={1,2,3,1,4,5};
// map<int,int>mp;
//         for(int i = 0 ; i<nums.size();i++)
//         {
//             mp[nums[i]]++;
//             if(mp[nums[i]]>1)
//             {
//                 cout<<nums[i] ; 
//             }
//         }
// return 0;

int s= 0;
int e=nums.size()-1;
while(s<e){
    int m = s+(e-s)/2;
    int c= 0 ;
    for(int i :nums)
    {
        if(i<=m){
            c++;
        }
    }
    if(c>m){
        e=m;
    }
    else{
        s=m+1;
    }
}
return s;
}