#include<iostream>
#include<vector>
#include<climits>
using namespace std;

//* MAX SUBARRAY SUM

int main() {
const int n = 7;
int arr[n] = {3,-4,5,4,-1,7,-8};
int maxsum = INT_MIN;

for(int start = 0; start < n; start++) {
    int currentsum = 0;
    for(int end = start; end < n; end++) {
        currentsum = currentsum + arr[end];
        maxsum = max(currentsum, maxsum);
        for(int i = start; i <= end; i++) {
            cout<< arr[i];
        }
        cout << " ";
    }
    cout << endl;
}

cout<< maxsum;


return 0;
}