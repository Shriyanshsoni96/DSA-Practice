#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
  if(nums.size()<= 2) 
             return nums.size();
     int i = 2;
    for (int j = 2; j < nums.size(); j++) {
        if (nums[j] != nums[i - 2]) {
            nums[i] = nums[j];
            i++;
        }   
    }
    return i ;
}

int main() {
    vector<int> nums = {1,1,1,2,2,3};
    int k = removeDuplicates(nums);
    cout << "k = " << k << endl;
    cout << "Array: ";
    
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}