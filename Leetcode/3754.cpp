#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int n = 102030040;
    vector<int> v;
    while (n > 0)
    {
        v.push_back(n % 10);
         n /= 10;
    }
   reverse(v.begin(),v.end());
       
       int sum = 0 ;
        int x= 0;
       for(auto i :v)
       {
        sum+=i;
        if(i>0){
        x=x*10+i;
        }
       }
       long long ans=x*sum;
       cout<<ans;
}