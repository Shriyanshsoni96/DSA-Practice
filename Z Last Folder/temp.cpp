#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int>nums={1,2,3,4,5,6,7};
    int n = nums.size();
    int k=3; 
    k=k%n;

        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
    for(auto i : nums)
    {
      cout<<i<<" ";
    }    
}