#include<bits/stdc++.h>
using namespace std;
vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
    for(auto i : nums){
        freq[i]++;
    }
    
    vector<pair<int,int>> mp ;
    for(auto i : freq)
    {
        mp.push_back({i.second,i.first});
    }

    sort(mpbegin(),mp.end());
    


    }
int main(){
vector<int> nums = {1,1,1,2,2,3};
int k = 2;
topKFrequent(nums,k);

return 0;
}