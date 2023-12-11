#include <stdio.h>
#include <ctype.h>

int main() {
    long num;

    printf("Enter a number: ");
    scanf("%ld", &num);

    if(isalpha(num)){
        printf("Input is not valid.");
        return 0;
    }

    int ld = -1; 

    while (num > 0) {
        int digit = num % 10;

        if (digit > ld) {
            ld = digit;
        }

        num /= 10;
    }

    printf("largest no is %d", ld);

    return 0;
}
