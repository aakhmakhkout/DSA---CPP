#include <stdio.h>
//*selection sort

void selectionSort(int arr[], int n){
    int temp;

    for(int i = 0; i < n-1; i++) {
        int si = i; //unsorted part of array
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[si]){
                si = j;
            }
        }
                temp = arr[i];
                arr[i] = arr[si];
                arr[si] = temp;
    }
}

int main() {
    int arr[] = {40, 12, 80, 75, 32, 41, 16, 50, 55};
    int size = sizeof(arr)/sizeof(arr[0]);

       printf("BEFORE SELECTION SORT : ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    selectionSort(arr, size);
    printf("\n\nAFTER SELECTION SORT: ");
     for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}