#include<iostream>
using namespace std;

void power(int n) {
    int pow = 1; 
    bool isPowerOf2 =false;

    for (int i = 1; i <= n; i++){
        if((2 * pow) == n){
            isPowerOf2 = true;
            break;
        }
        pow = (pow * 2);   
    }

    if(isPowerOf2 == true) {
        cout<< n << " is power of 2"<<endl;
    }
    else {
        cout<< n << " is not power of 2"<<endl;
    }
}

int main() {
    int num;

    cout<< "Enter the number : ";
    cin>>num;

    power(num);

    return 0;
}