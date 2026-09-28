#include <iostream>
using namespace std;

int main() {
    int num;
    bool isPrime = true;
    cout<<"Enter your number : ";
    cin>>num;

    for(int i=2; i<=(num-1); i++){
        if(num%i == 0){
            isPrime = false;
            break;
        }
    }
    if (isPrime== false) {
        cout<< num <<" is a non-prime number.";
    }
    else {
        cout<< num << " is a prime number.";
    }

    return 0;
}