#include<iostream>
#include<vector>
#include<climits>
using namespace std;

//* MAX SUBARRAY SUM (using kadane's algo)

int main() {
const int n = 7;
int arr[n] = {3,-4,5,4,-1,7,-8};
int maxsum = INT_MIN;
int currentsum = 0;

for(int i = 0; i < n; i++) {
   currentsum += arr[i];
   maxsum = max(currentsum, maxsum); // before reseting (because of negative array (edge case))

   if(currentsum < 0) {
    currentsum = 0;
   }
}

cout<< maxsum;


return 0;
}