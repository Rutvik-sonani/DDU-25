#include <stdio.h>

int main() {
    int n1, n2, n3;

    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 != n2 && n1 != n3 && n2 != n3) {
        printf("1\n"); 
    } else {
        printf("0\n");
    }

    return 0;
}
