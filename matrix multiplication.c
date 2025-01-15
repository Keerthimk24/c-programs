#include <stdio.h>
int main() {
    int m, n, p, q;
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d %d", &p, &q);
    if (n != p) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }
    
    int matrix1[m][n], matrix2[p][q], product[m][q];
    printf("Enter the elements of first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter the elements of second matrix:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            product[i][j] = 0;
            for (int k = 0; k < n; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("Product of matrices:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}
