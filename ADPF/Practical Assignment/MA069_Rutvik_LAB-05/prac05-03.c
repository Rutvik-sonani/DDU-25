#include <stdio.h>

int main() {
    float h;

    printf("Enter the height : ");
    scanf("%f", &h);

    if (h < 150) {
        printf("The person is Low Height\n");
    } else if (h >= 150 && h <= 175) {
        printf("The person is Average Height\n");
    } else {
        printf("The person is Tall Height\n");
    }

    return 0;
}
