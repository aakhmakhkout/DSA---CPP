#include<iostream>
#include <vector>
using namespace std;

//* majority element (brute force)

int mjrele(vector<int> &vec) {
    vector<int> ans;
    int n = vec.size();

    for(int val : vec){
    int freq = 0;
        for (int ele : vec){

        if(ele == val){
            freq++;
        }

        if(freq > n/2) {
            return val;
        }
        }
    }
    }
        

int main() {
    vector<int> vec = {4,4,2,2,2};

    int ans = mjrele(vec);

      cout << ans;

    return 0;
}