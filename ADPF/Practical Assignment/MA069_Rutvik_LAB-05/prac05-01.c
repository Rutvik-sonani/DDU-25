#include <stdio.h>

int main() {
    int cno;
    float pc,tc = 0.0;

    printf("Enter customer number: ");
    scanf("%d", &cno);
    printf("Enter power : ");
    scanf("%f", &pc);

    if (pc <= 100) {
        tc = pc * 0.75;
    } else if (pc <= 300) {
        tc = 75 + (pc - 100) * 1.00;
    } else if (pc <= 500) {
        tc = 275 + (pc - 300) * 1.50;
    } else {
        tc = 575 + (pc - 500) * 1.75;
    }

    printf("Customer Number: %d\n", cno);
    printf("Power Consumed : %.2f\n", pc);
    printf("Total Amount :  %.2f\n", tc);

    return 0;
}
