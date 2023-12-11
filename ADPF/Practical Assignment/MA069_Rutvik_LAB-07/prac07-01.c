#include <stdio.h>
#include <ctype.h>

int main() {
    long num;

    printf("Enter a number: ");
    scanf("%ld", &num);

    if(isalpha(num)){
        printf("no is not a binary");
        return 0;
    }

    while (num > 0) {
        int digit = num % 10;
        if (digit != 0 && digit != 1) {
            printf("no is not a binary");
            break;
        }

        num /= 10;

        if(num == 0){
            printf("no is a binary");
        }
    }

    return 0;
}
