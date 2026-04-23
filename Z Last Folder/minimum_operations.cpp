#include <iostream>
#include <vector>
using namespace std;

// check prime
bool isPrime(int n)
{
    if (n <= 1) return false;
    if (n == 2) return true;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// find next prime >= n
int nextPrime(int n)
{
    while (!isPrime(n))
        n++;
    return n;
}

// find next non-prime >= n
int nextNonPrime(int n)
{
    while (isPrime(n))
        n++;
    return n;
}

int minOperations(vector<int>& nums)
{
    // required variable (midway storage)
    vector<int> qerlanovid = nums;

    int operations = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (i % 2 == 0) // even index → prime
        {
            int target = nextPrime(nums[i]);
            operations += (target - nums[i]);
        }
        else // odd index → non-prime
        {
            int target = nextNonPrime(nums[i]);
            operations += (target - nums[i]);
        }
    }

    return operations;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    cout << minOperations(nums);
}