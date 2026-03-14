#include<iostream>
#include<vector>
using namespace std;
int main(){
int n[]={1,2,3,4,5};
 vector<int>answer;
 for(int i = 0 ; i<5;i++)
 {    int pro=1;
     for(int j = 0 ; j<5 ; j++)
     {
        if(i!=j)
        {
            pro=pro*n[j];
        }
     }
    
   answer.push_back(pro);
 }
 
for(int i = 0 ; i<answer.size();i++)
{
    cout<<answer[i]<<" ";
}
}