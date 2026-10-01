#include<bits/stdc++.h>
using namespace std;
// int fun(int n ){
//     if(n==0) return 0;
//     fun(n-1);
//     cout<<n<<" ";
//     // cout<<"hello"<<endl;
// }
// int main(){
// fun(10);
// return 0;
// }


// int fun(int n ){
//     if(n==0) return 0;
//   int sum = n + fun(n-1);
// }/ sum 

// int fun(int n ){
//     if(n==1) return 1;
//     int fact = n * fun(n-1);
// }// factorial 

// int fun(int n )
// {   
//     if(n<=1) return n;
//     int i = fun(n-1)+fun(n-2);
// }
// int main(){
//     int sum = fun(5);
//     cout<<sum;
// }


// int sumDigits(int n)
// {
//     if(n == 0) return 0;
//     return (n % 10) + sumDigits(n / 10);
// }

// int main()
// {
//     int n = 546;
//     cout << sumDigits(n);
//     return 0;
// }

//? print the array using the recursion option 1
// void printarray(vector<int>& nums , int n ){
//     if(n==0){
//          cout<<nums[n]<<" ";
//         return ; 
//     }
//     printarray(nums,n-1);
//     cout<<nums[n]<<" ";
// }
//? print the array using the recursion option 2

// void printarray(vector<int>& nums , int n ,int i  ){
//     if(i==n){
//         cout<<endl<<"print hogya he ";
//         return;
//     }
//     cout<<nums[i]<<" ";
//     i++;
//     printarray(nums,n,i);
// }

// int main (){
//     vector<int> nums ={2,3,4,5,6};
//     int n = nums.size();
//     int i = 0 ; 

//     printarray(nums,n,i);
//     return 0 ; 
// }

void sortarray(vector<int>& nums , int n ,int i  ){
    if(i==n){
        cout<<endl<<"Sorted array  ";
        return;
    }

    if(nums[i-1]<=nums[i]){
    i++;
    sortarray(nums,n,i);
    }
    else
    {
        cout<<"unsorted array";
        return ; 
    }
    
}

int main (){
    vector<int> nums ={2,3,5,5,6,4};
    int n = nums.size();
    int i = 1 ; 

    sortarray(nums,n,i);
    return 0 ; 
}