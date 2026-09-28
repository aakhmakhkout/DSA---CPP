#include<stdio.h>

//* Add of two 2d arrays
int main() {
    int rows, columns, currentRow = 0, nZero = 0;
    printf("Enter the number of Rows: ");
    scanf("%d", &rows);

    printf("\nEnter the number of columns: ");
    scanf("%d", &columns);

    int matrix[rows][columns];

    printf("Enter the Elements of matrix : \n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            printf("\nElement[%d] [%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nOriginal Matrix: \n\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }


    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            if(matrix[i][j] != 0){
                nZero++;
        }
        
    }  
    }
    
    int sparsematrix[nZero][3];
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j< columns; j++) {
            if(matrix[i][j] != 0){
                sparsematrix[currentRow][0] = i; 
                sparsematrix[currentRow][1] = j; 
                sparsematrix[currentRow][2] = matrix[i][j]; 

                currentRow++;
            }
        }




}
    printf("Sparse Matrix : \nRow | col | val\n");
    for(int i = 0; i < nZero; i++) {
        printf("%d     %d     %d\n", sparsematrix[i][0], sparsematrix[i][1], sparsematrix[i][2]);
    }

    return 0;
}