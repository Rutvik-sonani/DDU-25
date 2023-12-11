#include <stdio.h>

int fib(int n) {
    return (n <= 1) ? n : fib(n - 1) + fib(n - 2);
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The %dth term in Fibonacci Series: %d\n", n, fib(n));

    return 0;
}
