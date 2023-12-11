#include <stdio.h>

int countDistinct(int arr[], int size) {
    int distinctCount = 0;

    for (int i = 0; i < size; i++) {
        int isDistinct = 1;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDistinct = 0;
                break;
            }
        }

        if (isDistinct) {
            distinctCount++;
        }
    }

    return distinctCount;
}

int main() {
    int N;

    scanf("%d", &N);

    int sequence[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &sequence[i]);
    }

    printf("%d\n", countDistinct(sequence, N));

    return 0;
}
