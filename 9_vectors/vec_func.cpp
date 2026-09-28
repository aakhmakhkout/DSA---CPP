#include <iostream>
//#include <bits/c++.h>
#include <vector>
using namespace std;

//* VECTOR FUNCTIONS

int main() {

    vector<char> vec = {'a','b','c','d'};

    //*SIZE OF VECTOR

    cout << "size of vec = " << vec.size() << endl;

    //* PUSH BACK : how to push an element in a vector (last)

    vector<char> vec1;
    vector<int> vec2 = {1,2,3,4,5};

    cout << "Before : size of vec1 = " << vec1.size() << endl;

    vec1.push_back(30);
    vec1.push_back(40);
    vec1.push_back(50);

      for(int i : vec1) {
        cout<< i << " ";
    }

    vec2.push_back(6); // 1,2,3,4,5,6
    cout << "\nAfter : size of vec2 = " << vec1.size() << endl;
    
    for(int i : vec2) {
        cout<< i << " ";
    }

    //* POP_BACK : deletes the last element from the vector

    vector <int> vec3 = {10,20,30,40,70};

    cout << "\nBEFORE : size of vec3 = " << vec3.size() << endl;

    vec3.pop_back(); // deletes last element = 70.
    cout << "AFTER : size of vec3 = " << vec3.size() << endl;

    for(int i : vec3) {
        cout<< i << " ";
    }

    cout << endl;
    //* FRONT : returns us the starting value of vector

    cout << "FRONT VALUE : " << vec3.front() << endl;

    //* BACK : returns the last value of the vector
    cout << "BACK VALUE : " << vec3.back() << endl;

    //* AT : returns value from a perticular index
    cout << "AT VALUE : " << vec3.at(2) << endl;


    return 0;
}