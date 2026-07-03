// Longest subarray with the sum k of consicutive subarray 
#include<map>
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int longestsubarray(vector<int> &a , int &k )
{
    map<long long ,int> presum;
    long long sum= 0 ;
    int maxlen=0;
    for(int i = 0 ; i<a.size();i++)
    {
        sum+=a[i];
        if(sum==k)
        {
            maxlen=max(maxlen,i+1);
        }
        int rem=sum-k;
        if(presum.find(rem) != presum.end())
        {
            int len = i-presum[rem];
            maxlen=max(maxlen,len);
        }
        if(presum.find(sum) == presum.end())
        {
            presum[sum]=i;
        }
    }
    return maxlen;
}

int main()
{
    vector<int> a ={1,2,3,1,1,1,1};
    int k = 3;
    cout<<longestsubarray(a,k);
} 