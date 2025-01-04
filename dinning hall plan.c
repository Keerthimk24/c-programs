#include <stdio.h>
int main() {
    char position[6];
    int rail;
    scanf("%s", position);
    scanf("%d", &rail);
    if ((position[0] == 'f' && rail == 1) || 
        (position[0] == 'r' && rail == 2)) {
        printf("Left Handed\n");
    } else {
        printf("Right Handed\n");
    }

    return 0;
}