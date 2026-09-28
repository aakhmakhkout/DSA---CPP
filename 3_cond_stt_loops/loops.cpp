#include <iostream>
using namespace std;

int main() {
    int i=0;

    //! while loop...
    while(i<5){
        cout<<i+1<<endl;
        i++;
    }
 
    //! for loop...
    for(i=1; i<=20;i++) {
        cout<<"2 * " << i << " : " << 2*i << "\n";   
    }

    //! do while loop...
    do {
        cout<<"hello world";
        i++;
    }while(i<=10);

    return 0;
}