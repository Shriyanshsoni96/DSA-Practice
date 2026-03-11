#include<iostream>
using namespace std;
int main(){
    int n = 5;

  
        if(n == 0) return 1;

        int ans = 0;
        int power = 1;

        while(n > 0){
            
            int bit = n % 2;     // get last binary bit
            int flip = 1 - bit;  // flip it
            
            ans += flip * power;

            power *= 2;
            n /= 2;
        }
 cout<<ans;
return 0;
}