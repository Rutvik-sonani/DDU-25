#include <stdio.h>

double ft_to_inch(double ft) {
    return ft * 12.0;
}

double inch_to_cm(double inch) {
    return inch * 2.54;
}

double cm_to_meter(double cm) {
    return cm / 100.0;
}

int main() {
    double ft, inch, cm, meter;

    printf("Enter measurement in feet: ");
    scanf("%lf", &ft);

    inch = ft_to_inch(ft);
    cm = inch_to_cm(inch);
    meter = cm_to_meter(cm);

    printf("Measurement in meters: %lf\n", meter);

    return 0;
}