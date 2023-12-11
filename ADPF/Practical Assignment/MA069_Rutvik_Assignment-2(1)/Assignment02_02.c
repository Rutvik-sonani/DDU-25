#include <stdio.h>

int main() {
    float sequence[100]; 
    int count = 0;

    while (1) {
        float num;
        scanf("%f", &num);
        if (num == -1) {
            break;
        }
        sequence[count] = num;
        count++;
    }

    for (int i = 2; i < count; i++) {
        printf("%.1f ", (sequence[i] + sequence[i - 1] + sequence[i - 2]) / 3.0);
    }

    return 0;
}
