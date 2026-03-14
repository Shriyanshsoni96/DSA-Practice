#include<iostream>
using namespace std;
int kth(int i , int n ){
    int count=0;
    int j =1;
    while(j<=n)
    {
        if(n%j==0)
        {
            count++;
            if(count==i)
            {
                return j;
            }
        }
        j++;
    }
    return -1;
}


int main(){
int i ,n;
cout<<"Enter the number ";
cin>>n;
cout<<"Enter the Position of the factor ";
cin>>i;
cout<<"Kth term of the factor "<<kth(i,n);
return 0;
}