#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
//initialization
vector<int> a; //empty vector
a.push_back(1);
a.push_back(2);
a.push_back(4);
a.push_back(5);
a.push_back(7);
cout<<"Size of vector: "<<a.size()<<endl; //size of vector
cout<<"Capacity of vector: "<<a.capacity()<<endl; //capacity of vector
a.pop_back();//remove last element
cout<<"Size of vector after pop: "<<a.size()<<endl; //size of vector
 //first element
cout<<"First element: "<<a.front()<<endl;
 //last element
cout<<"Last element: "<<a.back()<<endl;
// to add the element at the middle of the vector
a.insert(a.begin()+2,3); //insert 3 at index 2

// reverse the vector
reverse(a.begin(),a.end());

//sorting the vector
// sort(a.begin(),a.end());

cout<<"Vector elements: ";
int i = 0 ;
while(i<a.size())
{
    cout<<a[i]<<" "<<endl; //read
    i++;
}

}