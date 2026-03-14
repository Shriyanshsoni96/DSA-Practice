#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<vector<int>> mat= {{1,1,1},{1 ,0,1} ,{1 , 1 ,1} };
int n=mat.size();
for(int i =0;i<n ; i++)
{
    for(int j = 0 ; j<n ; j++)
    if(mat[i][j]==0)
    {    
        for( int k = 0 ;k<n;k++ )
        {
            mat[k][j]=0;
        } 
        
        for(int l=0 ;l<n ;l++)
        {
            mat[i][l]=0;
        }
    }
}

for(int i = 0 ; i< n ;i++)
{
    for(int j =0 ;j<n ;j++)
    {
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}