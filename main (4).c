#include<stdio.h>
void main(){
    int n,days;
    float room_rent,total;
 printf("months:");
 scanf("%d",&n);
 printf("rent:");
 scanf("%f",&room_rent);
 printf("days:");
 scanf("%d",&days);
 if(n<1 || n>12){
     printf("invalid input");
 }
 switch(n)
 {
 case 4:
 case 6:
 case 11:
 case 12:
 total=room_rent*1.2*days;
 break;
 default:
 total=room_rent*days;
}
printf("%f",total);
}