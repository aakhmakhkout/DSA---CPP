#include<iostream>
#include <vector>
using namespace std;

//* Pair sum (brute force)

vector<int> pairSum(vector<int> &vec, int trg) {
    vector<int> ans;

    for(int i = 0; i < vec.size(); i++) {
        for(int j = i+1; j < vec.size(); j++){
            if(vec[i]+vec[j] == trg) {
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    return ans;
}

int main() {
    vector<int> vec = {2,7,11,15};
    int target = 18;

    vector<int> ans = pairSum(vec, target);

    for(int i : ans){
        cout<<i << " ";
    }

    return 0;
}