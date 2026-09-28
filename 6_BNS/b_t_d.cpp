#include<iostream>
using namespace std;

//* Binary to decimal

int binToDec(int n) {
    int rem = 0, pow = 1, result = 0;

    while (n > 0) {
        rem = n%2;
        result = result + (rem * pow);
        pow = pow * 2;
        n = n/10;
    }
    return result;
}

int main() {
    int num;
    cout << "Enter any binary number : ";
    cin>> num;

    cout << "The Binary to decimal of Number " << num << " is : " << binToDec(num);
}