#include <stdio.h>

int find_small_no(int arr1[], int size1, int arr2[], int size2) {
    int smallest = -1;

    for (int i = 0; i < size1; i++) {
        int found = 0;

        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                found = 1;
                break;
            }
        }

        if (!found && (smallest == -1 || arr1[i] < smallest)) {
            smallest = arr1[i];
        }
    }

    return smallest;
}

int main() {
    int N1, N2;

    scanf("%d", &N1);

    int arr1[N1];

    for (int i = 0; i < N1; i++) {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &N2);

    int arr2[N2];
    
    for (int i = 0; i < N2; i++) {
        scanf("%d", &arr2[i]);
    }

    int result = find_small_no(arr1, N1, arr2, N2);

    if (result == -1) {
        printf("NO\n");
    } else {
        printf("%d", result);
    }

    return 0;
}
