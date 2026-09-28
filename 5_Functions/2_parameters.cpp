#include<iostream>
using namespace std;

//*min of 2 numbers

void min(int a, int b) {
    if(a>b) {
        cout<< b << " is the minimum number";
    }
    else if(b==a) {
        cout << a <<" and " << b << " are equal numbers";
    }
    else{
        cout<< a << " is the minimum number";
    }
}


int main() {
    min(10,5);
    return 0;
}






//*sum of two numbers

// int add(int a, int b) {  // a, b are parameters
//     int sum = a+b;

//     return sum;
//}

// int main() {
//     cout<<add(5,10); //5 and 10 are arguments
//     return 0;
// }