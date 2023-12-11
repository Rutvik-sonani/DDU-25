#include <stdio.h>
#include <ctype.h>

int main() {
    int n,no1 = 0, no2 = 1;

    printf("Enter the number : ");
    scanf("%d", &n);

    if(isalpha(n)){
        printf("Input is not valid.");
        return 0;
    }

    for (int i = 0; i < n; ++i) {
        printf("%d ", no1);
        int no3 = no1 + no2;
        no1 = no2;
        no2 = no3;
    }
    return 0;
}
