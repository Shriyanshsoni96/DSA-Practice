#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<vector<int>>mat={{1,2,3},{4,5,6},{7,8,9} };
int rows = mat.size();
// int columns=mat[i].size;
for(int i = 0 ; i < rows ; i++)
{
    for(int j = 0 ; j <mat[i].size() ;j++ )
    {
        cout<<mat[i][j]<<" ";
    }  
    cout<<endl;
}
return 0;
}