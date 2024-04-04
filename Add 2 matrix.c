#include <stdio.h>

int main() {
    int rows, columns, i, j;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    
    int matrix1[rows][columns], matrix2[rows][columns], sum[rows][columns];
    
    printf("Enter elements of matrix 1:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    printf("Enter elements of matrix 2:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    printf("Sum of the matrices:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d\t ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
    }

    //*********Sum of elements in 2d array***
    #include <stdio.h>
    int main() {
    int rows, cols, sum = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter elements of the array:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }
    printf("Sum of all elements in the 2D array: %d\n", sum);
    return 0;
}