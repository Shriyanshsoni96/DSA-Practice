// frerquency of characters in the array 
#include<iostream>
#include<vector>
using namespace std;
int main(){
// this code is for the direct access of all the elements in the charcters 
vector<char> arr = {'A','b','c','E','d','a','A','E',};

    int hash[256]={0};
    for(int i =0 ; i < arr.size() ; i++)
    {
        hash[arr[i]]++;
    }
    
    int q;
    cin>>q;
    while(q--)
    {   char number;
        cin>>number;
        cout<<hash[number]<<endl;
    }

// this code is for the direct access of only lowercase the elements in the charcters 


// vector<char> arr = {'a','b','c','d','a'};
//     int hash[26]={0};
//     for(int i =0 ; i < arr.size() ; i++)
//     {
//         hash[arr[i]-'a']++;
//     }
    
//     int q;
//     cin>>q;
//     while(q--)
//     {   char number;
//         cin>>number;
//         cout<<hash[number-'a']<<endl;
//     }


// this code is for the direct access of only Uppercase of  the elements in the charcters 

// vector<char> arr = {'A','C','E','A','C'};
//     int hash[26]={0};
//     for(int i =0 ; i < arr.size() ; i++)
//     {
//         hash[arr[i]-'A']++;
//     }
    
//     int q;
//     cin>>q;
//     while(q--)
//     {   char number;
//         cin>>number;
//         cout<<hash[number-'A']<<endl;
//     }
return 0;
}