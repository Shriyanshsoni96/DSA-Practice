// frerquency of array in the numbers 

#include<iostream>
using namespace std;
int main()
{   
    int n =5;
    int arr[5]={1,2,1,4,3};
    int hash[13]={0};

    for(int i =0 ; i < n ; i++)
    {
        hash[arr[i]]+=1;
    }

    int q;
    cin>>q;
    while(q--)
    {   int number;
        cin>>number;
        cout<<hash[number]<<endl;
        
    }
}
