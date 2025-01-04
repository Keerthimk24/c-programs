#include<stdio.h>
void main()
{
    int n,days;
    float roomrent,total;
    printf("enter the no of months");
    scanf("%d",&n);
    printf("enter the roomrent");
    scanf("%f",&roomrent);
    printf("emter the no of days");
    scanf("%d",&days);
    if(n<1||n>12)
    {
        printf("invalid month");
    }
    switch(n)
    {
        case 4:
        case 6:
        case 11:
        case 12:
        total=roomrent*1.2*days;
        break;
        default:
        total=roomrent*days;
    }
    printf("%f",total);
}