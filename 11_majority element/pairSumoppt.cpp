#include<iostream>
#include <vector>
using namespace std;

//* Pair sum (2 pointer approach)

vector<int> pairSum(vector<int> &vec, int trg) {
    vector<int> ans;
    int ps;
    int i = 0, j = (vec.size() - 1);

    while(i<j) {
        ps = vec[i] + vec[j];

        if(ps > trg){
            j--;
        }
        else if (ps < trg){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }

    
}

int main() {
    vector<int> vec = {2,7,11,15};
    int target = 26 ;

    vector<int> ans = pairSum(vec, target);

    for(int i : ans){
        cout<<i << " ";
    }

    return 0;
}