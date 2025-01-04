#include <stdio.h>
int main() {
    int rows, columns, tree_number;
    scanf("%d %d %d", &rows, &columns, &tree_number);
    if (tree_number <= columns || (tree_number - 1) % columns == 0 || (tree_number - 1) % columns == columns - 1)
    {
        printf("No\n");
    } else {
        printf("Yes\n");
    }
    return 0;
}