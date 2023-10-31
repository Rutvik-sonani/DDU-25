#include<stdio.h>

int main(){
    printf("Bit in char : %d",CHAR_BIT);
    printf("max value of char : %d",CHAR_MAX);
    printf("min value of char : %d",CHAR_MIN);

    printf("max value of int : %d",INT_MAX);
    printf("min value of int : %d",INT_MIN);

    printf("max value of LONG : %d",LONG_MAX);
    printf("min value of LONG : %d",LONG_MIN);

    printf("max value of signed char : %d",SCHAR_MAX);
    printf("min value of signed char : %d",SCHAR_MIN);

    printf("max value of short : %d",SHRT_MAX);
    printf("min value of short : %d",SHRT_MIN);

    printf("max value of unsigned char : %ld",UCHAR_MAX);
    printf("max value of unsigned int : %ld",UINT_MAX);
    printf("max value of unsigned LONG : %ld",ULONG_MAX);
    printf("max value of unsigned short : %ld",USHRT_MAX);

    return 0;
}