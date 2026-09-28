#include<iostream>
using namespace std; 

//* WAF to print intersection of two arrays

void intersection(int arr1[], int arr2[], int size1, int size2) {

    for(int i = 0; i < size1; i++) {
    bool isCommon = false;
        for(int j = 0; j < size2; j++) {
            if(arr1[i] == arr2[j]){
                isCommon = true;
            }
        }
        if(isCommon == true) {
            bool dup = false;
            for(int k = 0; k < i; k++) {
                if(arr1[i] == arr1[k]){
                    dup = true;
                }
            }

            if(dup != true){
            cout<< arr1[i] << " ";
            }
        }
    }

}



int main() {
    int arr1[5] = {3, 4, 6, 7, 4};
    int arr2[4] = {1, 4, 5, 7};

    intersection(arr1, arr2, 5, 4);
    return 0;
}