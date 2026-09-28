#include<iostream>
using namespace std;

//*Reverse an array

void reverseArr(int arr[], int size){
    int start = 0, end = size-1, revArr[size];
    while(start < end){
    swap(arr[start], arr[end]); 
    start++;
    end--;
    }
   
}

int main() {
    int size = 7;
    int orgArr[] = {10, 20, 30, 40, 50, 60, 70};

    reverseArr(orgArr, size);

     for(int i = 0; i < size; i++){
        cout<<orgArr[i] << " ";
    }

    return 0;
}