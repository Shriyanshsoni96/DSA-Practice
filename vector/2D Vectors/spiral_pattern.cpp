#include<iostream>
using namespace std;
int spriral(int arr[][n],int m , int n ){

}
int main(){
int m ,n ;//m= rows n = col
cin>>m>>n;
int arr[m][n];

for(int i = 0 ; i<m ;i++)
{
    for(int j = 0 ; j<n ;j++)
    {
        cin>>arr[i][j];
    }
}
// for(int i = 0 ; i<m ;i++)
// {    cout<<endl;
//     for(int j = 0 ; j<n ;j++)
//     {
//         cout<<arr[i][j]<<"   ";
//     }
// }
cout<<spriral(arr,m,n);
return 0;
}