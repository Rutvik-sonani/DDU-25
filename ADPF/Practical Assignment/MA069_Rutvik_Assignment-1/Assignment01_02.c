#include <stdio.h>

int main() {
    int M, N;

    scanf("%d %d", &M, &N);

    if (N != 0 && M % N == 0) {
        printf("%d\n", M / N);
    } else {
        printf("0\n");
    }

    return 0;
}
