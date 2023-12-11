#include <stdio.h>

int s1(int n) {
    int s = 0;
    for (int i = 1; i <= n; ++i)
        s += (i % 2 == 0) ? -i * i : i * i;
    return s;
}

float s2(int n) {
    float s = 0.0;
    for (int i = 1; i <= n; ++i)
        s += 1.0 / (i * i);
    return s;
}

int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);

    printf("Sum 1: %d\n", s1(N));
    printf("Sum 2: %f\n", s2(N));

    return 0;
}
