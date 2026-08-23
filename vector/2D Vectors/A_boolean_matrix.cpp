#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n));

    // Input
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    // Step 1: Mark rows and columns that need to be changed
    vector<int> row(n, 0), col(n, 0);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] == 1){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    // Step 2: Update matrix based on marked rows and columns
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(row[i] == 1 || col[j] == 1){
                a[i][j] = 1;
            }
        }
    }

    // Output
    cout << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}