#include<iostream>
using namespace std;

//* PASS BY REFERENCE : not making copy of a variable, rather than passing its address (original)

void updateMarks(int marks[], int size){
    for(int i = 0; i < size; i++) {
        marks[i] = marks[i] + 10;
    }
}



int main() {
    int marks[] = {60, 65, 87, 64, 70};

    updateMarks(marks, 5);
    for(int i = 0; i < 5; i++) {
        cout<<marks[i] << " "; // output will be updatedMarks, cause we used pass by reference here
    }

    return 0;
}