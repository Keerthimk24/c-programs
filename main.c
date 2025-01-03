/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int sumOfNaturalNumbers(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sumOfNaturalNumbers(n - 1);
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int sum = sumOfNaturalNumbers(n);
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    return 0;
}
