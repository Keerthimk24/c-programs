#include <stdio.h>
int main() {
    int a[10][10], transpose[10][10], row, col;
    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &col);
    printf("Enter matrix elements:\n");
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j) {
            transpose[j][i] = a[i][j];
        }
    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < col; ++i)
        for (int j = 0; j < row; ++j) {
            printf("%d  ", transpose[i][j]);
            if (j == row - 1)
                printf("\n");
        }
    return 0;
}
