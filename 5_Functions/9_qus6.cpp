#include <iostream>
using namespace std;
//*print the prime numbers from 2 to n;

void prime(int n) {
    bool isPrime = true;
    int number = 2, j = 1;
    if(n == 1){
        cout <<"1 is a composite number" << endl;
        return;
    } 

    for (int i = 2; i<=n; i ++){
        for(j = 2; j<=i-1; j++){
        if(i%j == 0){
            isPrime = false;
            break;
        }
        }
        if(isPrime == true){
        cout << i << endl;
        }
        // else {
        //     cout << "prime = " << i << endl;
        // }
        isPrime = true;
    }
}


int main() {
    int num;
    cout << "Enter your number : ";
    cin>>num;

    prime(num);

return 0;
}