#include<stdio.h>


int main() {
    int rows, columns;
    printf("Enter the number of Rows: ");
    scanf("%d", &rows);

    printf("\nEnter the number of columns: ");
    scanf("%d", &columns);

    int arr[rows][columns];


    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            printf("\nElement[%d] [%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Your 2D array is\n\n");

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }  

    return 0;
}