#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

bool isvalid(vector<int>& arr , int mid, int m )
{
    int student = 1;
    int cur = 0;

    for(int i : arr){
        if(i > mid) return false;
        if(cur + i <= mid)
        {
            cur += i;
        }
        else
        {
            student++;
            cur = i;
            if(student > m)
                return false;
        }
    }
    return true;
}

int main()
{   
    int m = 2; 
    vector<int> arr ={12,34,67,90};

    int s = *max_element(arr.begin(),arr.end());
    int e = accumulate(arr.begin(), arr.end(),0);

    int ans = 0;

    while(s <= e)
    {
        int mid = s + (e - s) / 2;

        if(isvalid(arr, mid, m)) 
        {
            ans = mid;
            e = mid - 1; 
        }
        else{
            s = mid + 1;
        }
    }

    cout << ans;
}