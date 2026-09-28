#include <iostream>
#include <climits>
using namespace std;

//* WAF to swap min and max number from the array
void swapMinMax(int arr[], int size){
    int min = INT_MAX, max = INT_MIN, max_index, min_index;

    for(int i = 0; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
            max_index = i;
        }
        if(arr[i] < min) {
            min = arr[i];
            min_index = i;
        }
    }
    swap(arr[max_index], arr[min_index]);
}

int main() {
    int arr[8] = {50, 20, 10, 40, 70, 60, 30, 80};

    cout<< "BEFORE SWAPING : \n";
    for(int i = 0; i < 8; i++) {
        cout<<arr[i] << " ";
    }

    swapMinMax(arr, 8);

    cout<< "\nAFTER SWAPING : \n";
    for(int i = 0; i < 8; i++) {
        cout<<arr[i] << " ";
    }
    return 0;
}