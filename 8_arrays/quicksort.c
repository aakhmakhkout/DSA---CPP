#include <stdio.h>
#include <stdlib.h>

void quickSort(int arr[], int low, int high) {
    int part_index; // Index of pivot after partition

    if(low < high){
    part_index = partition(arr, low, high);
    quickSort(arr, low, part_index-1); //* sort left array
    quickSort(arr, part_index+1, high); //*sort right array
    }
}

int partition (int arr[], int low, int high){
    int  pivot = arr[low];
    int temp;
    int i = low+1;
    int j = high;

do{

    while(arr[i] < pivot) {
        i++;
    }

    while(arr[j] > pivot) {
        j--;
    }

    if(i<j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
} while(i<j);

    //swap arr[low] and arr[j]
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}

int main() {
	int arr[] = {2,1,4,8,6,5,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int low, high;
    printf("BEFORE QUICK SORT : ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    quickSort(arr, 0, size-1);
    printf("\n\nAFTER QUICK  SORT: ");
     for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
        

	return 0;
}