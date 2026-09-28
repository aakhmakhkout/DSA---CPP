#include <iostream>
using namespace std;

//*calculate sum of digits of a number...

int sumOfDigits(int num) {
    int remainder = 0, sum = 0;

    while(num!=0) {
        remainder = num%10;
        sum = sum + remainder;
        num = num/10;
    }
    return sum;
}

int main() {
    int number;
    cout<<"Enter your number: ";
    cin>>number;

    cout <<"sum of digits of " << number << " is : " << sumOfDigits(number);

    return 0;
}