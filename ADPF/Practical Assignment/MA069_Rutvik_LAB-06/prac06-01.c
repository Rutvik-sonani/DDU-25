#include <stdio.h>

int main() {
    double s1, s2, s3;

    l1:
        printf("Enter lengths of three sides: ");
        scanf("%lf %lf %lf", &s1, &s2, &s3);

        if ((s1 + s2 > s3) && (s2 + s3 > s1) && (s1 + s3 > s2)) {
            if (s1 == s2 && s2 == s3) {
                printf("Equilateral Triangle\n");
            } else if (s1 == s2 || s2 == s3 || s1 == s3) {
                printf("Isosceles Triangle\n");
            } else {
                printf("Scalene Triangle\n");
            }
        } else {
            printf("A triangle cannot be formed with these side lengths.\n");
            goto l1;
        }
    return 0;
}
