#include <iostream>
using namespace std;

int main() {
    cout<< "kaneki"<< "ken"<<endl;

//Type casting:
// 1. type conversion (implicit)

    char section = 'B';
    int res = section;

    cout<< res <<endl;

// 2. type casting (explicit)
    double marks = 87.67;
    int newMarks = (int)marks;

    cout<<newMarks;

    return 0;
}

