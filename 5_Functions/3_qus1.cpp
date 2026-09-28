#include<iostream>
using namespace std;

//* calculate the sum of numbers from 1 to N;
int sum(int num) {
    int count = 0;
    for(int i = 1; i<=num; i++) {
        count+=i;
    }

    return count;
}
int main() {
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    cout<<sum(n); 

    return 0;
}