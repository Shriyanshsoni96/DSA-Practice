#include<bits/stdc++.h>
using namespace std;
// void fun(int n ){
//     if(n==0) return;
//     fun(n-1);
//     cout<<n<<" ";
//     // cout<<"hello"<<endl;
// }
// int main(){
// fun(10);
// return 0;
// }


int fun(int n ){
    if(n==0) return 0;
  int sum = n + fun(n-1);
   
}

int main(){
    int sum = fun(5);
    cout<<sum;
}