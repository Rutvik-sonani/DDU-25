#include <stdio.h>
#include <ctype.h>

int main() {
    int num;
    long fac = 1; 

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isalpha(num)){
        printf("Input is not valid.");
        return 0;
    }

    if (num < 0) {
        printf("negative no not allowes");
    } else {
        for (int i = 1; i <= num; ++i) {
            fac *= i;
        }

        printf("Factorial no is %ld",fac);
    }

    return 0;
}
