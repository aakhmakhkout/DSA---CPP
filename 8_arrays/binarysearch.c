#include<stdio.h>
//* BINARY SEARCH

int binarySearch(int target, int size, int arr[]){
    int low = 0;
    int high = size-1;
    while(low<=high) {
    int middle = (low+high) / 2;

        if(arr[middle] == target) {
            return middle;
        }

        if(arr[middle] < target) {
            low = middle + 1;
        }

        else{
            high = middle - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int target = 20;
    // int size = sizeof(arr)/sizeof(int);

    int result = binarySearch(target, 9, arr);
    printf("%d", result);


    return 0;
}