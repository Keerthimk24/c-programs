#include <stdio.h>
void decimalToBinary(int n) {
    if (n > 1) {
        decimalToBinary(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    if (n >= 0) {
        printf("Binary representation: ");
        decimalToBinary(n);
        printf("\n");
    } else {
        printf("Please enter a non-negative integer.\n");
    }
    return 0;
}
