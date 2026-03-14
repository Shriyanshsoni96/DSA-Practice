#include<iostream>
#include<algorithm>
using namespace std;
int pivot(int nums[], int s)
{
int total=0;
int i =0;
for(i =0; i<s; i++ )
{
    total+=nums[i];
}
int leftsum=0;
for( int j =0 ; j<s;j++)
{
    int rightsum=total-leftsum-nums[j];
    if(leftsum==rightsum)
    {
        return j;
    }
    leftsum+=nums[j];
}
return -1;
}

int main(){
int nums[]={1,7,3,6,5,6};

int s = sizeof(nums)/sizeof(int);
cout<<pivot(nums,s);
}