// #include<iostream>
// using namespace std;
// int fanb(int n)
// {
//     if(n == 0 || n == 1) return n;
//     return fanb(n-1) + fanb(n-2);
// }

// int main(){
//     int n = 6;
//     cout << fanb(n);
//     return 0;
// }

#include<iostream>
using namespace std;

int fibo(int n, int i, int a, int b)
{
    if(i == n) return a;

    return fibo(n, i + 1, b, a + b);
}

int main(){
    int n = 6;
    cout << fibo(n, 0, 0, 1);
    return 0;
}