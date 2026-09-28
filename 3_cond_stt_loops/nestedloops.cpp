#include <iostream>
using namespace std;

int main() {
    int m=10;
    int n=10;
    for(int i = 5; i>=1; i--){   
        for(int j = i; j<=5; j++) {
            cout<<" * ";
        }
        cout<<endl;
    }

    return 0;
}