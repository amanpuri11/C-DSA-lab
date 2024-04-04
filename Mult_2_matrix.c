#include <stdio.h>

void main() {
    int m, n, p, q, i, j, k;
    int first[10][10], second[10][10], multiply[10][10];

    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &first[i][j]);
        }
    }
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("The matrices cannot be multiplied.\n");
    } else {
        printf("Enter the elements of the second matrix:\n");
        for (i = 0; i < p; i++) {
            for (j = 0; j < q; j++) {
                scanf("%d", &second[i][j]);
            }
        }

        for (i = 0; i < m; i++) {
            for (j = 0; j < q; j++) {
                multiply[i][j] = 0;
                for (k = 0; k < n; k++) {
                    multiply[i][j] += first[i][k] * second[k][j];
                }
            }
        }
        printf("The product of the two matrices is:\n");
        for (i = 0; i < m; i++) {
            for (j = 0; j < q; j++) {
                printf("%d ", multiply[i][j]);
            }
            printf("\n");
        }
    }
}