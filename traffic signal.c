#include <stdio.h>
int main() {
    float speed, distance,time;
    scanf("%f", &speed);
    scanf("%f", &distance);
    scanf("%f", &time);
    float sps= speed / 3600.0;
    float ttr = distance / sps;
    if (ttr <= time) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}