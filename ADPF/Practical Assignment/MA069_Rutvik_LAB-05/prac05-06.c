#include <stdio.h>

int main() {
    int mno,mday;

    printf("Enter the any month no : ");
    scanf("%d", &mno);

    if (mno >= 1 && mno <= 12) {
        if (mno == 4 || mno == 6 || mno == 9 || mno == 11) {
            mday = 30;
        } else if (mno == 2) {
            mday = 28;
        } else {
            mday = 31;
        }
    } else {
        printf("Invalid month no.\n");
    }

    printf("The number of days in month is: %d\n", mday);

    return 0;
}
