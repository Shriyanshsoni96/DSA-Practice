#include<bits/stdc++.h>
using namespace std;
 int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.empty()) return 0;
        int cnt=1;
        int maxcount= 1;
        for(int i = 1; i< nums.size();i++){
            if(nums[i]==nums[i-1])
            {
                continue;
            }
            else if(nums[i]==nums[i-1]+1){
                cnt++;
            }
            else
            {
                cnt=1;
            }
            maxcount=max(maxcount,cnt);
        }
        return maxcount;
    }
int main(){
vector<int> nums={200,100,1,4,3,5,2};
cout<<longestConsecutive(nums);
   
return 0;
}