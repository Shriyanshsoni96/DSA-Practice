#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {40, 10, 20, 30};

    vector<int> temp = nums;

    sort(temp.begin(), temp.end());

    unordered_map<int, int> mp;
    int rank = 1;

    for (int i = 0; i < temp.size(); i++)
    {
        if (mp.find(temp[i]) == mp.end())
        {
            mp[temp[i]] = rank;
            rank++;
        }
    }

    vector<int> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        ans.push_back(mp[nums[i]]);
    }

    

    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}