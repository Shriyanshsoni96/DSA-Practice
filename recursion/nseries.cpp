// #include<iostream>
// using namespace std;
// int series(int n)
// {   
//     if(n<=0) 
//     {cout<<0;return 0;}
//     cout<<n<<endl;
//     return series(n-1);
// }
// int main(){
// int n=5;
// series(n);

// return 0;
// }

#include <iostream>
using namespace std;

int pi(int n) {
    if (n == 0) 
    {return 0;}

    pi(n - 1);

    cout <<n<<" ";
    if (n > 1) cout << " ";
    return 0 ;
}

int main() {
    int n = 5;
    pi(n);
}