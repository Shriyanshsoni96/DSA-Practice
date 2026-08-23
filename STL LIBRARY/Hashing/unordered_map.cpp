// frerquency of array in the numbers 
// this stored the data in the unsorted manner

#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{   
    int n =5;
    int arr[5]={1,2,1,4,3};
    unordered_map<int,int> mpp;

    for(int i =0 ; i < n ; i++)
    {
        mpp[arr[i]]++;
    }
    for(auto i : mpp)
    {
      cout<<i.first<<" -> "<<i.second<<endl;;
    }
    // time complexity in the map 
    // storing and fetching in best & average: O(logN)  N-> no of elements in array
    // unorderd map has worst complexity of O(N);

    // int q;
    // cin>>q;
    // while(q--)
    // {   int number;
    //     cin>>number;
    //     cout<<mpp[number]<<endl;
        
    // }
}

