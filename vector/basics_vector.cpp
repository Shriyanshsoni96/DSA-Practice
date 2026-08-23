#include<iostream>
#include<vector>
using namespace std;
int main(){
    //vector<int>arr(3,0);
    //3 is the size of vector and we store all the element as zero
    // Its a basic type to print the vector and array;
    // for(int i = 0 ; i < arr.size();i++)
    // {
    // cout<<arr[i]<<" ";
    // }
    
    //For each loop in this i store the value of vec 
    // datatype of this i in iteration is depend on the vectors datatype
    vector<int> arr;
   
    arr.push_back(23);
     for(int i : arr)
    {
        cout<<i<<" ";
    }
    cout<<endl<<arr.size()<<endl;
    arr.push_back(34);
    arr.push_back(45);
    arr.push_back(67);
    arr.push_back(78);

     arr.pop_back();
    cout<<endl; 
     for(int i : arr)
    {
        cout<<i<<" ";
    }
    cout<<endl<<arr.front();
    cout<<endl<<arr.back();



}