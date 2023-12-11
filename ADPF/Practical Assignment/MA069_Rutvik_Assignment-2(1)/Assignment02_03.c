#include <stdio.h>

int main() {
    int c, i = 0, count = 0;

    c = getchar();
    while (c != '\n') {
        if (c == ' ' || c == '\t' || c == '.' || c == ',' || c == ';') {
            if (i) {
                i = 0;
                count++;
            }
        } else {
            if (!i)
                i = 1;
        }
        c = getchar();
    }

    if (i)
        count++;

    printf("%d\n", count);

    return 0;
}
