#include <stdio.h>
#include <math.h>

double len(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double area(double s1, double s2, double s3) {
    double s = (s1 + s2 + s3) / 2;
    return sqrt(s * (s - s1) * (s - s2) * (s - s3));
}

int check(int xs[], int ys[], int nx, int ny) {
    double t = area(len(xs[0], ys[0], xs[1], ys[1]),
                    len(xs[1], ys[1], xs[2], ys[2]),
                    len(xs[2], ys[2], xs[0], ys[0]));

    double a1 = area(len(nx, ny, xs[1], ys[1]),
                     len(xs[1], ys[1], xs[2], ys[2]),
                     len(xs[2], ys[2], nx, ny));

    double a2 = area(len(xs[0], ys[0], nx, ny),
                     len(nx, ny, xs[2], ys[2]),
                     len(xs[2], ys[2], xs[0], ys[0]));

    double a3 = area(len(xs[0], ys[0], xs[1], ys[1]),
                     len(xs[1], ys[1], nx, ny),
                     len(nx, ny, xs[0], ys[0]));

    return t == a1 + a2 + a3;
}

int main() {
    int x[3], y[3];
    for (int i = 0; i < 3; ++i)
        scanf("%d %d", &x[i], &y[i]);

    double s1 = len(x[0], y[0], x[1], y[1]);
    double s2 = len(x[1], y[1], x[2], y[2]);
    double s3 = len(x[2], y[2], x[0], y[0]);

    if (s1 + s2 > s3 && s2 + s3 > s1 && s3 + s1 > s2) {
        printf("1\n");

        double a = area(s1, s2, s3);
        printf("%f\n", a);

        int nx, ny;
        scanf("%d %d", &nx, &ny);

        if (check(x, y, nx, ny))
            printf("1\n");
        else
            printf("0\n");
    } else {
        printf("0\n");
    }

    return 0;
}
