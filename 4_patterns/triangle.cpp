#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"enter pattern number : ";
    cin>>num;


    for(int i = 0; i<num; i++) {
        for(int j=num; j>i+1; j--) {
            cout << " ";
        }
         cout<<"*";
        

        for(int l=0; l<(2*i-1); l++) {
            cout << " ";
        
        }
        if(i!=0){
        cout<<"*";
    }    
        cout<<endl;
    }

    for(int i=0; i<num-1; i++) {
        for(int j=0; j<i+1; j++) {
            cout<<" ";
        }
        cout<<"*";

        for(int l=0; l<(2*(num-2-i)-1); l++) {
            cout << " ";
        
        }
        if(i!=num-2) {
        cout<<"*";
        }

        cout<<endl;
    }
     



    //? pyramid pattern...
    //* for(int i=0; i<num; i++) {
    //*     for(int j=num; j>i+1; j--) {
    //*         cout << " ";
    //*     }

    //*     for(int k = 0; k<=i; k++) {
    //*         cout<<k+1;
    //*     }

    //*     for(int l=i; l>0; l--) {
    //*         cout << l;
    //*     }

    //*     cout << endl;
    //* }

    //? inverted triangle = "1111", " 222", "  33", "   4"
    //* for(int i = 0; i<num; i++) {
    //     //! spaces
    //*     for (int j = 0; j < i; j++) {
    //*         cout << " ";
    //*     }
    //     //! numbers
    //*       for (int k = 0; k<num-i; k++) {
    //*          cout<<i + 1;
    //*      }

    //*     cout << endl;
    //* }

    //? floyd's triangle pattern = 1,23,456,789'10
    //* for(int i = 0; i < num; i ++) {
    //*     for(int j = 0; j <= i; j++) {
    //*         cout<< ptrn << " ";
    //*         ptrn++;
    //*     }
    //*     cout<<endl;
    //* }

    //? reverse but char = A, BA, CBA, DCBA....
    //*  for(int i = 0; i<num; i++) {
    //*     char ch = 'A' + i;
    //*      for(int j = 0; j<=i; j++) {
    //*         cout<< ch << " ";
    //*         ch--;
    //*      }
    //*      cout << endl;
    //*  }

    //? reverse triangle, 1,21,321,4321..
    //*  for(int i = 0; i<num; i++) {
    //*      for(int j = i+1; j> 0; j--) {
    //*         cout<< j << " ";
    //*      }
    //*      cout << endl;
    //* }

     //? triangle = 1,12,123,1234
    //*   for(int i = 0;i<num; i++) {
    //*       for(int j = 0; j<=i; j++) {
    //*           cout<<j+1 << " ";
    //*       }
     
    //*       cout<< endl;
    //*   }

    //? triangle char = A, BB, CCC, DDDD
    //*  char ch = 'A';
    //*  for(int i = 0;i<num; i++) {
    //*      for(int j = 0; j<=i; j++) {
    //*          cout<<ch << " ";
    //*      }
    //*      ch++;
    //*      cout<< endl;
    //*  }

    //? triangle, 1,22,333,4444
    //* for(int i = 0;i<num; i++) {
    //*     for(int j = 0; j<=i; j++) {
    //*         cout<<i+1 << " ";
    //*     }

    //*     cout<< endl;
    //* }

    //? triangle, 4321,321,21,1
    //* for(int i = 0;i<num; i++) {
    //*     for(int j = num; j>i; j--) {
    //*         cout<<j;
    //*     }

    //*     cout<< endl;
    //* }
     return 0;
}