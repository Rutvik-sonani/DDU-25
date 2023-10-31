#include <stdio.h>

int main() {
    int n1 = 34;
    double n2 = 7.61293812847;

    int fwidth = 19;
    int pre = 6;

    printf("\nInteger: %*d\n", fwidth, n1);
    printf("Double: %*.*lf\n", fwidth, pre, n2);

    return 0;
}
