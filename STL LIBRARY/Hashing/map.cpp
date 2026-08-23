// frerquency of array in the numbers 

#include<iostream>
#include<map>
using namespace std;
int main()
{   
    int n =5;
    int arr[5]={1,2,1,4,3};
    map<int,int> mpp;

    for(int i =0 ; i < n ; i++)
    {
        mpp[arr[i]]++;
    }
    for(auto i : mpp)
    {
      cout<<i.first<<" -> "<<i.second<<endl;;
    }
    // tiime complexity in the map 
    // storing and fetching in best, average,worst case : O(logN)  N-> no of elements in array





    // int q;
    // cin>>q;
    // while(q--)
    // {   int number;
    //     cin>>number;
    //     cout<<mpp[number]<<endl;
        
    // }
}

// in this code we are using the map.