#include <stdio.h>

//*BUBBLE SORT
void BubbleSort(int arr[], int n){
    int temp=0;
    int isSorted = 0;

    for(int i = 0; i < n-1; i ++) {
        isSorted = 1; //* Ensures if the array is sorted already or not.
        printf("\nworking on pass no : %d", i+1);
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSorted = 0;
            }
            }
            if(isSorted){
                return;
        }

    }
}



int main() {
    int arr[] = {40, 20, 15, 50, 70, 35, 27, 89, 12, 10};
    // int arr[] = {1, 2, 3,4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("BEFORE BUBBLE SORT : ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    BubbleSort(arr, size);
    printf("\n\nAFTER BUBBLE SORT: ");
     for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}