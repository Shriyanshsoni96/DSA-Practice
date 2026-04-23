#include<iostream>
#include<vector>
using namespace std;
int addti(int a[],int n,int k  )
{  int arr=0;
  for(int i = 0 ; i<n;i++)
  {
    arr=a[i]+arr*10;
  }
  int sum= arr+k;
  int count=0;
  int reverse=0;
  while(sum!=0){
       long digit = (n %10);
         reverse = (reverse*10)+digit ;
        n = n / 10;
        count++;
    }

  while(sum!=0)
  { 

     int temp=sum;
  temp =temp%10;
      
  sum = sum/10;
  }
  
  for(int i = ans.size()-1 ; i >=0 ;i--)
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