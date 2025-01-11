#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int count = 0, i;
    printf("Enter a string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ') {
            count++;
        }
    }
    printf("Number of words in the string: %d\n", count + 1);
    return 0;
}
