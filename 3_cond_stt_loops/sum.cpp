#include<iostream>
using namespace std;

int main() {
    int num, oddsum=0;
    cout<<"enter your number : ";
    cin>>num;

    //* sum of odd numbers from 1 to n
    for(int i = 1; i<=num; i++) {
        if(i%2 !=0) {
        oddsum = oddsum + i;
        }
    }

    cout<<"the sum of 1 to "<< num << " is equal to : " << oddsum << endl;

    return 0;
}