#include<iostream>
#include<map>
#include<vector>
using namespace std;
int consisting(string &s,int k )
{
int left = 0;
int ans = 0;
  int n = s.size();
    map<char,int> freq;
    for(int right = 0 ; right<s.size();right++)
    {   freq[s[right]]++;
            while(freq[s[right]]>=k )
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
int k= 2;
cout<<consisting(s,k);
return 0;
}