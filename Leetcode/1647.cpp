#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minDeletions(string s) {

    
        unordered_map<char, int> mp;

        for (char ch : s) {
            mp[ch]++;
        }


        unordered_set<int> used;

        int deletions = 0;


        for (auto it : mp) {

            int freq = it.second;


            while (freq > 0 && used.find(freq) != used.end()) {
                freq--;
                deletions++;
            }


            if (freq > 0) {
                used.insert(freq);
            }
        }

        return deletions;
    }
};

