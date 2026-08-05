#include<iostream>
#include<vector>
#include<limits>
#include<algorithm>
using namespace std;
int main(){
vector<int> nums={5,4,9};
sort(nums.begin(),nums.end()); 

int min = nums.front();
int max= nums.back();
int n = abs(min-max)+1;
vector<int> ans; 
// ans.push_back(min);

// for(int i = 1 ; i<n-1 ;i++)
// {
//     if(nums[i]==nums[i-1]+1)
//     {
//         ans.push_back(nums[i]);
//     }
//     else{
//         ans.push_back(nums[i-1]+1);
//         ans.push_back(nums[i]);
//     }
// }




for (int i = 1; i < nums.size(); i++) {
        for (int x = nums[i - 1] + 1; x < nums[i]; x++) {
                ans.push_back(x);
            }
        }


for(auto i : ans )
{
    cout<<i<<endl;
}
return 0;
}