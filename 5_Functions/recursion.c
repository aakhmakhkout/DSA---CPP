#include<stdio.h>
//*Sum of 1 - N using recursion.

int sum(int n) {
    if(n == 0) {
        return 0;
    }
    else {
        return n + sum(n-1);
    }
}

int main() {
    int n = 10;

    printf("%d", sum(n));


    return 0;
}