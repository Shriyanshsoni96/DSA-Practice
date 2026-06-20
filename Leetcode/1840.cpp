#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxbuilding(int n ,vector<vector<int>>& restrictions )
{
    int i = 0 ;
    int maxi=0;
    int a=0;
    vector<int> ans(0,0);
    int sum= 0 ;
    while(i<n)
    {
        // if(i==0)
        // {
        //     ans[i]=0;
        // }
        // if(restrictions[a][0]==i)
        // {
        //  ans[i]=restrictions[a][1];
        //  a++;
        // }
        // maxi=max(maxi,ans[i]);


    int m =restrictions.size();
    int b=0;
    for(int a = 0 ;a<m ;a++)
    {
        restrictions[a][0]=b;
        ans[b]=restrictions[a][1];
    }
        i++;
    }
    

    // int m =restrictions.size();
    // int b=0;
    // for(int a = 0 ;a<m ;a++)
    // {
    //     restrictions[a][0]=b;
    //     ans[b]=restrictions[a][1];
    // }
    sort(ans.begin(),ans.end());


}
int main(){
vector<vector<int>> restrictions={{5,3},{2,5},{7,4},{10,3}};
int n = 10 ;
int max=maxbuilding(n,restrictions);
cout<<max;
}