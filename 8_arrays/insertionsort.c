#include <stdio.h>
//*insertion sort

void insertionSort(int arr[], int n){

    for(int i = 1; i < n; i++) {
        int curr = arr[i]; //sorted part of array
        int pre= i-1; 
            while(pre >= 0 && arr[pre] > curr){
                arr[pre+1] = arr[pre];
                pre--;
            }
            arr[pre+1] = curr; //place curr element to its correct position.
        }
    }


int main() {
                //  0   1   2   3   4   5   6   7   8
                //  p   c
    // int arr[] = {40, 12, 80, 75, 32, 41, 16, 50, 55};
    // int arr[] = {12, 40, 80, 75, 32, 41, 16, 50, 55};

                //      p    c
    // int arr[] = {12, 40, 80, 75, 32, 41, 16, 50, 55};

                //          p   c
    // int arr[] = {12, 40, 80, 75, 32, 41, 16, 50, 55};
    // int arr[] = {12, 40, 75, 80, 32, 41, 16, 50, 55};

                //              p   c
    // int arr[] = {12, 32, 40, 75, 80, 41, 16, 50, 55};
                            //.
                            //.
                            //.
    //int arr[] = {12, 16, 32, 40, 41, 50, 55, 75, 80};                




    int arr[] = {40, 12, 80, 75, 32, 41, 16, 50, 55};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("BEFORE SELECTION SORT : ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    insertionSort(arr, size);
    printf("\n\nAFTER SELECTION SORT: ");
     for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}