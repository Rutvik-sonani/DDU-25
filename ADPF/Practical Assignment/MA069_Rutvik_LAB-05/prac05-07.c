#include <stdio.h>

int main() {
    int mno;

    printf("Enter the any month no : ");
    scanf("%d", &mno);

    if (mno == 1) {
        printf("month 1 is: January\n");
    } else if (mno == 2) {
        printf("month 2 is: February\n");
    } else if (mno == 3) {
        printf("month 3 is: March\n");
    } else if (mno == 4) {
        printf("month 4 is: April\n");
    } else if (mno == 5) {
        printf("month 5 is: May\n");
    } else if (mno == 6) {
        printf("month 6 is: June\n");
    } else if (mno == 7) {
        printf("month 7 is: July\n");
    } else if (mno == 8) {
        printf("month 8 is: August\n");
    } else if (mno == 9) {
        printf("month 9 is: September\n");
    } else if (mno == 10) {
        printf("month 10 is: October\n");
    } else if (mno == 11) {
        printf("month 11 is: November\n");
    } else if (mno == 12) {
        printf("month 12 is: December\n");
    } else {
        printf("Invalid month no\n");
    }

    return 0;
}
