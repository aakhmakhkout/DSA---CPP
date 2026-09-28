#include <iostream>
using namespace std;

//* WAF to calculate the sum and product of all numbers in a array.

void sumAndProduct(int arr[], int size){
int sum = 0, product = 1;

for(int i = 0; i < size; i++) {
    sum = (sum + arr[i]);
    product = (product * arr[i]);
}
 cout << "The sum of the numbers of the array is : " << sum << "\nAnd the product of the numbers of the array is : " << product << endl;
}

int main() {
int size = 7;
int arr[size] = {1, 2, 3, 4, 5, 6, 7};

sumAndProduct(arr, size);

    return 0;
}