#include<iostream>
#include<vector>
using namespace std;
int addti(int a[],int n,int k  )
{  int arr=0;
vector<int>ans;
  for(int i = 0 ; i<n;i++)
  {
    arr=a[i]+arr*10;
  }
  int sum= arr+k;
  while(sum!=0)
  {
     int temp=sum;
  temp =temp%10;
  cout<<temp<<endl;
   ans.push_back(temp);
  sum = sum/10;

  }
  for(int i = 0 ; i<ans.size();i++)
  {
    cout<<ans[i]<<" ";
  }
}
int main(){
    int n ;
    cin>>n;
int a[n];
for(int i = 0 ; i<n ; i++)
{
    cin>>a[i];
}
int k ;
cin>>k;
addti(a,n,k);
return 0;
}