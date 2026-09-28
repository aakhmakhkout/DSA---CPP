#include<iostream>
#include<vector>
using namespace std;

//* LINEAR SEARCH

int main() {
    vector<int> vec = {1,2,3,4,5,6,7,8,9};
    int val, index = 0;
    bool result = false;
    cout<<"Enter your value to search : ";
    cin>> val;

    //* Method 1
    // for(int i : vec) {
    //     if(i == val) {
    //         result = true;
    //         break;
    //     }
        //index++;
    // }

    // if(result == true) {
    //     cout<<"VALUE MATCHED"<<endl;
    // }
    // else {
    //     cout<<"INVALID VALUE";
    // }

    //* Method 2

    for(int i = 0; i < vec.size(); i++) {
        if(vec[i] == val) {
            result = true;
            index = i;
            break;
        }
    }

    if(result == true) {
        cout << "Given value " << val << " is present on " << index << " position" << endl;
    }
    else{
        cout<< "Value Not Found";
    }
    return 0;
}