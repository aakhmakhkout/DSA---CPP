#include <iostream>
//#include <bits/c++.h>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {4,1,2,1,2};
    int ans = 0;

    for(int val : vec) {
        ans = ans ^ val;  //* 0^4 = 4, 4^1 = 5, 5^2 = 7, 7^1 = 6, 6 ^ 2 = 4
    }

    cout << "single number is : " << ans;

    return 0;
}