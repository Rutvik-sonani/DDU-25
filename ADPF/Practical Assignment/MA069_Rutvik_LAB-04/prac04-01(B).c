#include <stdio.h>

int main() {
    float x, y;

    printf("Enter the x-coordinate: ");
    scanf("%f", &x);

    printf("Enter the y-coordinate: ");
    scanf("%f", &y);

    if (x > 0 && y > 0) {
        printf("The point (%.2f, %.2f) is in the first quadrant.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("The point (%.2f, %.2f) is in the second quadrant.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("The point (%.2f, %.2f) is in the third quadrant.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("The point (%.2f, %.2f) is in the fourth quadrant.\n", x, y);
    } else if (x == 0 && y == 0) {
        printf("The point (%.2f, %.2f) is at the origin.\n", x, y);
    } else if (x == 0) {
        printf("The point (%.2f, %.2f) lies on the y-axis.\n", x, y);
    } else if (y == 0) {
        printf("The point (%.2f, %.2f) lies on the x-axis.\n", x, y);
    }

    return 0;
}
