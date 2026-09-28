#include <iostream>
using namespace std;

void fibonacci(int n){
    int fib = 1, pre = 1;

    cout << "fibonacci series from 2 to " << n << " is : " << endl;
    for(int i = 0; i < n-2; i++){
        // int temp = fib;
        fib = pre + fib;
        cout << fib << ", ";
        // pre = temp
        pre = fib - pre;

    }
}


int main() {
    int fibo;
    cout << "Enter fibonacci(nth) number : ";
    cin >> fibo;

    fibonacci(fibo);
    return 0;
}