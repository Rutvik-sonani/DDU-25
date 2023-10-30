#include<stdio.h>

int main() {
    int it;
    float ft;
    double dt;
    char ct;

    printf("Size of int: %zu bytes\n", sizeof(it));
    printf("Size of float: %zu bytes\n", sizeof(ft));
    printf("Size of double: %zu bytes\n", sizeof(dt));
    printf("Size of char: %zu byte\n", sizeof(ct));
    
    return 0;
}