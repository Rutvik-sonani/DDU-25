#include <stdio.h>

int find_even(int k) {
    int num, count = 0;

    while (1) {
        scanf("%d", &num);

        if (num == -1) {
            return -1;
            break;
        }

        if (num % 2 == 0) {
            count++;

            if (count == k) {
                return num;
            }
        }
    }
    return -1;
}

int main() {
    int k;

    scanf("%d", &k);

    printf("%d\n", find_even(k));

    return 0;
}
