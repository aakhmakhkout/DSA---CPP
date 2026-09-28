#include <iostream>
using namespace std;

int main() {
    char ch;
    cout<<"Enter your character (A-Z/a-z) : ";
    cin>>ch;

    if(ch >= 'a' && ch <= 'z'){
        cout<<"\nThe given char is lowecase...";
    }
    else if (ch >= 65 && ch <= 90){
        cout<<"\nThe given char is Uppercase...";
    }
    else{
        cout<<"\ninvalid char...!";
    }

    return 0;
}