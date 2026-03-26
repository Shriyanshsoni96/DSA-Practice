#include<iostream>
using namespace std;
int conver(string n){
    int sum =0;
    cout<<n<<endl;
    for(int i = 0 ; i<n.size();i++)
    {
        sum = sum*10 + (n[i]-'0'); 
    }
    // cout<<sum<<endl;
    return sum;
}

int main(){
string n1 ="2";
string n2="3";
// cout<<n1<<endl;
// cout<<n2<<endl;

int n = conver(n1);
int m = conver(n2);
int pro= n*m;
cout<<pro;
string ans;
ans.push_back(pro);
for(int i = 0 ; i<ans.size();i++)
{
    cout<<ans[i];
}
return 0;
}