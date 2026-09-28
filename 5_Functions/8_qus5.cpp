#include <iostream>
using namespace std;
//*check if the number is prime or not

void prime(int n) {
    bool isPrime = true;
    if(n == 1){
        cout <<"1 is a composite number" << endl;
        return;
    } 

    for(int i = 2; i <= n/2; i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }

    if(isPrime == false) {
        cout << n << " is a Non-Prime Number";
    }
    else {
        cout << n << " is a Prime Number";
    }
}

int main() {
    int num;
    cout << "Enter your number : ";
    cin>>num;

    prime(num);

return 0;
}