#include<iostream>
#include<climits>
using namespace std;
//* find the smallest and largest number from the array

int main() {
    int size = 6, small_index = 0, large_index = 0; 
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int numbers[size];

    cout<<"Enter numbers : " <<endl;
    for(int i = 0; i < size; i++) {
        cout<<i+1 << " : ";
        cin>>numbers[i];
    }

    for(int i = 0; i < size; i++) {
        if(numbers[i] < smallest) {
            smallest = numbers[i];
            small_index = i;
        }
        if(numbers[i] > largest){
            largest = numbers[i];
            large_index = i;
        }
        //* smallest = min(numbers[i], smallest);
        //* largest = max(numbers[i], largest);

    }
    cout<<"smallest number from the array is " << smallest << " and on index " << small_index<< endl;
    cout<<"largest number from the array is " << largest << " and on index " << large_index<< endl;

return 0;
}