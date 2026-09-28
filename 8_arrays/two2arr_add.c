#include<stdio.h>

//* Add of two 2d arrays
int main() {
    int rows, columns;
    printf("Enter the number of Rows: ");
    scanf("%d", &rows);

    printf("\nEnter the number of columns: ");
    scanf("%d", &columns);

    int arr1[rows][columns];
    int arr2[rows][columns];
    int sum[rows][columns];

    printf("Enter the Elements of First Array : \n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            printf("\nElement[%d] [%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the Elements of Second Array : \n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            printf("\nElement[%d] [%d] : ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("Your addition of two 2D arrays is\n\n");

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }  

    return 0;
}