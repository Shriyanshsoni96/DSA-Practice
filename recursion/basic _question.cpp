#include<iostream>
using namespace std;

int sumDigits(int n)
{
    if(n == 0) return 0;
    return (n % 10) + sumDigits(n / 10);
}

int main()
{
    int n = 546;
    cout << sumDigits(n);
    return 0;
}

#include<iostream>
using namespace std;

bool isPalindrome(string s, int start, int end)
{
    if(start >= end) return true;
    if(s[start] != s[end]) return false;
    return isPalindrome(s, start + 1, end - 1);
}

int main()
{
    string s = "NITIN";
    if(isPalindrome(s, 0, s.length() - 1))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
}

#include<iostream>
using namespace std;

int findMax(int arr[], int n)
{
    if(n == 1) return arr[0];
    int maxFromRest = findMax(arr, n - 1);    
    return max(arr[n - 1], maxFromRest);
}

int main()
{
    int arr[] = {3, 7, 2, 9, 5};
    int n = 5;

    cout << findMax(arr, n);
    return 0;
}