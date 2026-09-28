#include <iostream>
//#include <bits/c++.h>
#include <vector>
using namespace std;

int main() {
    // vector<int> vec1;
    vector<int> vec2 = {1,2,3,4};
    vector<int> vec3(5,0);
    vector<char> vec4 = {'a','b','c','d'};
    // cout << vec1[0] << endl;
    // cout << vec2[0] << endl;
    // cout << vec3[0] << endl;
    // cout << vec3[1] << endl;
    // cout << vec3[2] << endl;
    // cout << vec3[3] << endl;

    for (int val : vec3) {  // i = value at the index of vector
        cout << val << endl;
    }

    for (char val : vec4) {  // i = value at the index of vector
        cout << val << endl;
    }

    return 0;
}