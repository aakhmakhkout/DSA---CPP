#include<iostream>
using namespace std;

//*calculate N factorial;
int factN(int num) {
    int fact = 1;
    for(int i = 1; i<=num; i++) {
        fact*=i;
    }

    return fact;
}
int main() {
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    cout<<factN(n); 

    return 0;
}