#include <iostream>
using namespace std;

int main() {
    int num, ptrn = 1;
    cout<<"enter your pattern number : ";
    cin>>num;

    for(int i=0;  i<num; i++){
        for(int j=0; j<num; j++){
            cout<<ptrn << " ";
            ptrn++;
        }
        cout<<endl;
    }

    return 0;
}