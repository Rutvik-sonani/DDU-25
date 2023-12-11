#include <stdio.h>
#include <math.h>

double len(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double area(double s1, double s2, double s3) {
    double s = (s1 + s2 + s3) / 2.0;
    return sqrt(s * (s - s1) * (s - s2) * (s - s3));
}

int check(int x[], int y[], int nx, int ny) {
    double t = area(len(x[0], y[0], x[1], y[1]), len(x[1], y[1], x[2], y[2]), len(x[2], y[2], x[0], y[0]));
    double s1 = area(len(nx, ny, x[0], y[0]), len(x[1], y[1], x[2], y[2]), len(nx, ny, x[1], y[1]));
    double s2 = area(len(nx, ny, x[0], y[0]), len(x[1], y[1], x[2], y[2]), len(nx, ny, x[2], y[2]));
    double s3 = area(len(nx, ny, x[1], y[1]), len(x[0], y[0], x[2], y[2]), len(nx, ny, x[2], y[2]));

    return t == s1 + s2 + s3;
}

int main() {
    int x[3], y[3];
    for (int i = 0; i < 3; ++i) {
        printf("Enter coordinates for point %d (x y): ", i + 1);
        scanf("%d %d", &x[i], &y[i]);
    }

    double s1 = len(x[0], y[0], x[1], y[1]);
    double s2 = len(x[1], y[1], x[2], y[2]);
    double s3 = len(x[2], y[2], x[0], y[0]);

    if (s1 + s2 > s3 && s2 + s3 > s1 && s3 + s1 > s2) {
        printf("Triangle can be formed.\n");
        printf("Area: %f\n", area(s1, s2, s3));

        int nx, ny;
        printf("Enter coordinates for a new point (x y): ");
        scanf("%d %d", &nx, &ny);

        if (check(x, y, nx, ny))
            printf("The point is inside the triangle.\n");
        else
            printf("The point is outside the triangle.\n");
    } else {
        printf("Triangle cannot be formed with the given points.\n");
    }

    return 0;
}
