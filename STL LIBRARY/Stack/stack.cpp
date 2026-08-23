#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
stack<int> st;
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);
 st.pop();

 stack<int> temp= st;
 while(!temp.empty())
 {
    cout<<temp.top()<<endl;
    temp.pop();
}
 
cout<<st.size();

return 0;
}