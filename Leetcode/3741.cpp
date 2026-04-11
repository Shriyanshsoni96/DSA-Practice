#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int ans(vector<int> &num)
{   
    int n = num.size();
    int ans=INT_MAX;
    int i = 0 ; 
    int flag=0;
    if(num.size()==1)
    {
        return -1;
    }
    for(i = 0 ; i< n; i++ )
    {
        int j = i+1;
        int k = n-1;
        while(j<k)
        {
            if(num[i]==num[j] && num[i]==num[k])
            {
                int sum = abs(i-j)+abs(j-k)+abs(k-i);
                ans=min(sum, ans);
                flag=1;
            }
            else if(num[i]==num[j])
            {
                k--;
            }
            else if(num[i]==num[k])
            {
                j++;
            }
            else
            {
            j++;
            k--;
            }
        }
    }
    if(flag==1)
    {
        return ans;
    }
    else{
    return -1;
    }
}
int main(){
vector<int> num={1,1,2,3,2,1,2};
cout<<ans(num);
return 0;
}