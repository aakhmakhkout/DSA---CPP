#include <iostream>
using namespace std;

int main() {
    int size = 4;
    int age[size]; // age[5]. we can also skip the size of array
 
    //* loops on arrays/ 

    //* input
    for(int i = 0; i < size; i++) {
        cout<<"Enter age : " << i+1 << " = ";
        cin>>age[i];
    }

   //* output

    for (int i = 0; i < size; i++) {
        cout<<"Age [" << i+1 << "] is : " << age[i]<<endl;
    }


    return 0;
}