#include <iostream>
using namespace std;

int main() {
    string name;
    int age;
    char section;
    double amount;
    cout << "Enter your name : ";
    cin>> name;

    cout<<"\n\nenter your age : ";
    cin>>age;

    cout<<"\n\nenter your section : ";
    cin>>section;

    cout<<"\n\nenter the amount : ";
    cin>>amount;

    cout<< "your data is : " << "Name : " <<name <<", Age : " << age << ", section : " << section << ", amount : " << amount << endl;

    return 0;
}