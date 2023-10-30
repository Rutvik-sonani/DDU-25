#include<stdio.h>
#include<conio.h>

int main(){
    int year;

    printf("Enter any year : ");
    scanf("%d",&year);

   // if (year % 400 == 0) {
   //    printf("%d is a leap year.", y);
   // }
   // else if (year % 100 == 0) {
   //    printf("%d is not a leap year.", y);
   // }
   // else if (year % 4 == 0) {
   //    printf("%d is a leap year.", y);
   // }
   // else {
   //    printf("%d is not a leap year.", y);
   // }

   (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)) ? printf("%d is leap year.",year) : printf("%d is not leap year.",year);

    return 0;
}