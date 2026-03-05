#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int cur = arr[i];
        int prev = i - 1;
        while(prev >= 0 && arr[prev] > cur)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = cur;
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertionSort(arr, n);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }

    return 0;
}