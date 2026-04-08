#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

int main()
{   int m = 2; 
    vector<int> arr ={10,20,30,40};
    int s = *max_element(arr.begin(),arr.end());
    int e =  accumulate(arr.begin(), arr.end(),0);
    while(s<e)
    {
        
    }
}