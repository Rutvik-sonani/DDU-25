#include <stdio.h>

int main() {
    double a, b, c;

    printf("Enter the lengths of three sides of the triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a + b > c && b + c > a && c + a > b) {
        if (a == b && b == c) {
            printf("Equilateral Triangle\n");
        }
        else if (a == b || b == c || c == a) {
            printf("Isosceles Triangle\n");
        }
        else if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b) {
            printf("Right-angle Triangle\n");
        }
        else {
            printf("Scalene Triangle\n");
        }
    } else {
        printf("This Triangle is NOT possible.\n");
    }

    return 0;
}
