#include<iostream>
#include<vector>
using namespace std;

//* SUBARRAY

int main() {
int n = 9;
int arr[n] = {1,2,3,4,5,6,7,8,9};

for(int start = 0; start < n; start++) {
    for(int end = start; end < n; end++) {
        for(int i = start; i <= end; i++) {
            cout<< arr[i];
        }
        cout << " ";
    }
    cout << endl;
}


return 0;
}