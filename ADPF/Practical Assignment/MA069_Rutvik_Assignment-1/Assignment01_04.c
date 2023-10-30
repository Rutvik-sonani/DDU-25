#include <stdio.h>

int main() {
    int prev_num, current_num;
    int distinct_count = 0;

    printf("Enter a sorted sequence (ending with -1): ");
    scanf("%d", &prev_num);

    if (prev_num == -1) {
        printf("0\n");
        return 0;
    }

    distinct_count = 1;  

    while (1) {
        scanf("%d", &current_num);

        if (current_num == -1) {
            break; 
        }

        if (current_num != prev_num) {
            distinct_count++; 
        }

        prev_num = current_num; 
    }

    printf("%d\n", distinct_count);

    return 0;
}
