#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>nums = {1,3,2,2,3,1};
vector<int> temp = nums ; 

sort(temp.begin(), temp.end());
int left= 0 ;
int right = temp.size()-1;
for(int i = 0 ; i<temp.size();i++)
{
    if(i%2==0)//even condition he 
    {
        if(temp[left]<temp[right])
        {
            nums[i]=temp[left];
            left++;
        }
    }
    else
    {
        if(temp[right]>temp[left])
        {
            nums[i]=temp[right];
            right--;
        }
    }
}

for(auto i : nums)
{
    cout<<i<<",";
}
return 0;
}