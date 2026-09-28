#include <iostream>
//#include <bits/c++.h>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    cout<< "size of vector = " << vec.size() << endl;
    cout<< "Capacity of vector = " << vec.capacity() << endl;


    return 0;
}