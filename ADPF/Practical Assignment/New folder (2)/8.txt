#include <stdio.h>

unsigned long long fact(int n) {
    return (n == 0 || n == 1) ? 1 : n * fact(n - 1);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d = %llu\n", num, fact(num));

    return 0;
}