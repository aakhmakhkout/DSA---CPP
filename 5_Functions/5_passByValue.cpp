#include<iostream>
using namespace std;

//* pass by value....
 int add(int a, int b) {  // a, b are parameters
    int sum=0;
    a= a+b; // 5+10 =15
    b= b+a; // 10+15 = 25
    sum = a+b; // 15 + 25 = 40

    return sum;
}

 int main() {
    int a=5, b=10;
     cout<<add(a,b); //5 and 10 are arguments

     cout<<"\n" << a << " " << b << endl; // a = 5, b = 10
     return 0;
 }