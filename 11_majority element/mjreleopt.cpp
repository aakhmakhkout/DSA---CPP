#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;

//* majority element (optimized approach)

int mjrele(vector<int> &vec) {
    sort(vec.begin(), vec.end());
    int n = vec.size();
    int ans = vec[0];
    int freq = 1;

        for(int i = 1; i < n; i ++) {
            if(vec[i] == vec[i-1]){
                freq++;
            }
            else {
                freq = 1;
                ans = vec[i];
            }

            if(freq > n/2){
                return ans;
            }
        }
        return ans;
    }
        

int main() {
    vector<int> vec = {2,5,3,4,2,4,5,5,5,4,3};
    int ans = mjrele(vec);

      cout << ans;

    return 0;
}