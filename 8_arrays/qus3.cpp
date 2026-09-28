#include <iostream>
using namespace std;

//* WAF to find all non-uniques numbers from the array.

void unique(int arr[], int size) {

    for (int i = 0; i < size; i++){
        bool unq = true;
        for(int j = 0; j < size; j++) {
            if(i != j && arr[i] == arr[j]) {
                unq = false;
                break;
            }
        }
        if(unq == true) {
            cout<<arr[i] << " ";
        }
    }
}


int main() {
    int arr[8] = {2, 1, 5, 3, 2, 1, 4, 3};

    unique(arr, 8);
    return 0;
}