#include <stdio.h>
#include <math.h>

int prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int armstrong(int n) {
    int orig = n, sum = 0, d, digits = 0;
    while (orig != 0) {
        orig /= 10;
        ++digits;
    }
    orig = n;
    while (orig != 0) {
        d = orig % 10;
        sum += pow(d, digits);
        orig /= 10;
    }
    return (n == sum);
}

int perfect(int n) {
    int sum = 1;
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) sum += i;
    }
    return (n == sum);
}

int main() {
    int start, end;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Prime numbers: ");
    for (int i = start; i <= end; ++i)
        if (prime(i)) printf("%d ", i);

    printf("\nArmstrong numbers: ");
    for (int i = start; i <= end; ++i)
        if (armstrong(i)) printf("%d ", i);

    printf("\nPerfect numbers: ");
    for (int i = start; i <= end; ++i)
        if (perfect(i)) printf("%d ", i);

    return 0;
}
