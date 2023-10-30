#include <stdio.h>

int main() {
    int num, firstLargest = -1, secondLargest = -1, distinctCount = 0;

    printf("Enter a sequence of non-negative integers (terminated by -1):\n");
    
    while (1) {
        scanf("%d", &num);
        
        if (num == -1) {
            break; 
        }

        if (num != firstLargest) {
            distinctCount++;
            if (num > firstLargest) {
                secondLargest = firstLargest;
                firstLargest = num;
            } else if (num > secondLargest) {
                secondLargest = num;
            }
        }
    }

    if (distinctCount >= 2) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
