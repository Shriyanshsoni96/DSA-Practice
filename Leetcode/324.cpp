#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums = {1,5,1,1,6,4};
vector<int> temp = nums ; 
for(auto i : temp)
{
    cout<<i<<endl;
}
return 0;
}