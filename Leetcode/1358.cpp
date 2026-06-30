#include<iostream>
#include<map>
#include<vector>
using namespace std;
int consisting(string &s)
{

int left = 0;
int ans = 0;
  int n = s.size();
    map<char,int> freq;
    for(int right = 0 ; right<s.size();right++)
    {   freq[s[right]]++;
            while(freq['a']>0 && freq['b']>0 && freq['c']>0 )
            {
                ans += n-right;
                
                freq[s[left]]--;
                left++;
            }
    }
    return ans;
}
int main(){
string s="abcabc";
cout<<consisting(s);
return 0;
}