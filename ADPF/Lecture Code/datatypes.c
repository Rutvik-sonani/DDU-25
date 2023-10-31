#include "stdio.h"
int main()
{
    short a;
    long b;
    printf("Size of void is %d\n",sizeof(void));
    printf("Size of int is %d\n",sizeof(int));
    printf("Size of float is %d\n",sizeof(float));
    printf("Size of double is %d\n",sizeof(double));
    printf("Size of char is %d\n",sizeof(char));
    printf("Size of short int is %d\n",sizeof(a));
    printf("Size of long int is %d\n",sizeof(b));

    unsigned char c = 130;
    printf("char  is %c = %d\n",c,c);

    const int d = 999;
    printf("const d = %d\n",d);
    // d = 23;
    // printf("const d = %d\n",d);
    return 0;
}
