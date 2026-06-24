#include<iostream>
#include<string>
using namespace std;
int maxballon(string text)
{
   //for balloon we need b=1,a=1,l=2,o=2,n=1;

   int ans= 0 ;
   int cb=0,ca=0,cl=0,co=0,cn=0;
   for(auto i : text)
   {
       if(i=='b') cb++;
       if(i=='a') ca++;
       if(i=='l') cl++;
       if(i=='o') co++;
       if(i=='n') cn++;

       if(cb<=1 && ca<=1 && cl<=2 && co<=2 && cn<=1)
       {
        ans++;
        cb=0,ca=0,cl=0,co=0,cn=0;
       }
   }
   return ans;
}
int main(){
string text="loonbalxballpoon";
cout<<maxballon(text);
return 0;
}