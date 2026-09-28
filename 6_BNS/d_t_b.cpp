#include<iostream>
using namespace std;

//*Decimal to Binary conversion

int decToBin(int n){
    int pow = 1, rem = 0, result = 0;
    while(n > 0) {
        rem = n%2;
        result = result + (rem * pow);
        pow = pow * 10;
        n = n/2;
    }
        return result;

}



int main() {
    int num;
    // cout<< "enter your number : ";
    // cin>> num;
    cout<< "Decimal to Binary conversion ;" << endl;
    for (int i = 1; i <=10; i ++) {
    cout << decToBin(i)<<endl;  
    }


    return 0;
}