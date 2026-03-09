#include<iostream>
using namespace std;
int digsum(int arr[][4],int rows, int clms)
{
    //for sum of right diagonal
int sum=0;
for(int i = 0 ; i < rows ; i++)
{
    for(int j = 0 ; j < clms ;j++ )
    {
        if(i==j)
        {
            sum=sum+arr[i][j];
        }
        else if(i==clms-i-1)
        {
            sum=sum+arr[i][j];
        }
    }  
}
return sum;
}
int main(){
int arr[4][4]={{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};
int rows= 4 ,clm=4;

cout<<digsum(arr,rows,clm);
}