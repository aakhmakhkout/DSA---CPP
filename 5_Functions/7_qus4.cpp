#include<iostream>
using namespace std;

//*calculate nCr binomial coefficient for n & r: formula = nCr = n!/r! (n-r)!

//* step 5 (factnCr(n)), step 9 (factnCr(r)), step 12 (factnCr(nmr)): takes the values from nCr func (factnCr(n), factnCr(r), factnCr(nmr))...
int factnCr(int nr) {   //? inputs the n = 5, r= 2,nmr = 3, values

    //*step 6: calcluates: fact_n, step 10: fact_r, step 13 fact_nmr
    int fact_nr = 1;
    for(int i = 1; i<=nr; i++) {
        fact_nr*=i;
    }
    //* step 7: returns : fact_n, step 11: fact_r, step 14: fact_nmr
    return fact_nr; //? return the factorial of n = 120, r = 2, nmr = 6
}

int nCr(int n, int r){ //? step 3: copy of n and r (from main func) is passes to n and r (nCr) parameters...

    //? step 4: calls the factnCr() and assigns its output value(fact_nr) to fact_n variable...
    int fact_n = factnCr(n); //* sends n(5) value to the factnCr func and assigns the fact of n(120) to the variable "fact_n"

     //? step 8: calls the factnCr() and assigns its output value(fact_nr) to fact_n variable...
    int fact_r = factnCr(r); //* sends r(2) value to the factnCr func and assigns the fact of r(2) to the variable "fact_r"

     //? step 11: calls the factnCr() and assigns its output value(fact_nr) to fact_n variable...
    int fact_nmr = factnCr(n-r); //* sends nmr(5-2 = 3) value to the factnCr func and assigns the fact of nmr(6) to the variable "fact_r"

    //? step 15: returns the output of the program...
    return fact_n/(fact_r * fact_nmr); //? 120/(2 * 6) = 120 / 12 = 10...
}


int main() {
    int n = 5, r = 2; //* step 1: declaration and intialization of variables
    // cout<<"Enter the ist number(n) : ";
    // cin>>n;
    // cout<<"Enter the second number(r) : ";
    // cin>>r;
    //*step 2: calls the nCr func
    cout<<"nCr of " << n << " and" << r << " is : " <<nCr(n,r); //* sends n(5) and r(5) values to nCr func and prints the output

    return 0;
}