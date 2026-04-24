#include<iostream>
#include<vector>
using namespace std;

bool isSort(int num[], int size){

    if(size == 1 or size == 0){      // base case
        return true;
    }

    if(num[0] < num[1] and isSort(num + 1, size - 1)){ // recursive function
        return true;
    }

    return false;
}

int main(){
int num[] = {1,2,3,4,0};
cout<< boolalpha << isSort(num, 5);

return 0;
}

//correct code