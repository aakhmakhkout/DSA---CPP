#include <iostream>
using namespace std;

int main() {
    int age[] = {20, 25, 22, 26, 28}; // age[5]. we can also skip the size of array

    cout<<age[0] << endl; // arrays index starts from 0 - (size-1)  20
    cout<<age[1] << endl; // 25
    cout<<age[2] << endl; // 22
    cout<<age[3] << endl; // 26
    cout<<age[4] << endl; // 28

    age[3] = 40;
    cout<<age[3] << endl; // 40


    return 0;
}