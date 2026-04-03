#include<iostream>
#include<vector>
using namespace std;
// working on only sortedd array 
int binarysearch(vector<int>arr, int target)
{

    int left = 0 ;
    int right = arr.size()-1;
    int mid = left + (right - left) / 2;
    while(left<=right)
    {
        if(arr[mid] == target)
        {
            return mid;// returning index of the element
        }

        if(target>arr[mid])
        {
            left = mid+1; 
        }
        else
        {
            right=mid-1;
        }

        mid=left + (right - left) / 2;
    }
    return -1;
}

int main(){
vector<int> nums= {2,4,6,5,7,46,56,67};
int target = 46;
int index=binarysearch(nums, target);
cout<<index;

return 0;
}