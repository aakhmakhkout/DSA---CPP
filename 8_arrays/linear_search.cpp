#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    // bool isPresent = false;
    // int i = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            // isPresent = true;
            return i; //* output = target value
            // break;
        }
    }
    return -1; //* value not found

    // if(isPresent == true) {
    //     cout<<"The target value [" << target << "] is present at [" << i << "] position";
    // }
    // else{
    //     cout<<"Target value not found!";
    // }

}


int main() {
    int arr[] = {10, 20, 15, 7, 3, 8, 14};
    int target;

    cout<< "Enter your target value : ";
    cin>>target;

    cout<<linearSearch(arr, 7, target);

    return 0;
}