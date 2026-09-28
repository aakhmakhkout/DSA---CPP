#include<iostream>
#include<vector>
using namespace std;

//* REVERSE OF A VECTOR

void reverse(vector<int> &vec) {
    int revNo = 0;
    int start = 0;
    int end = vec.size()-1;

    while(start < end) {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}


int main() {
 vector<int> vec = {1,2,3,4,5,6,7,8,9};

reverse(vec);

 for (int i : vec) {
    cout<< i;
 }
return 0;
}