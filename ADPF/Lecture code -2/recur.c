#include <stdio.h>
void fibo(int t);
int fact(int t);
int fibo_min(int, int);
int fact(int t)
{
    if(t == 1) return 1;
    return t * fact(t-1);
}
static int pf(int a)
{
    printf("Value is %d -- ",a);
}

int main()
{
    printf("%5d",fact(6));
    fibo(6);
    int a = 1; 
    int b = 1;
    int c;
    printf("%2d ",a);
    printf("%2d ",b);
    while(c<20)
    {
        c = a+b;
        printf("%2d ",c);
        a = b;
        b = c;
    }   
    return 0;
}
int fibo_min(int a , int b)
{
    int c = a + b;
    printf("%2d ",c);
    return c;
}
void fibo(int t)
{
    int a = 1; 
    int b = 1;
    int c=0;
    for(int i = 3;i<=t;i++)
    {
        c = a+b;
        a=b;
        b=c;
    }
        printf("%2d ",c);

    // int a = 1; 
    // int b = 1;
    // int c=0;
    // printf("%2d ",a);
    // printf("%2d ",b);
    // while(c<t)
    // {
    //     c = fibo_min(a,b);
    //     // printf("%2d ",c);
    //     a = b;
    //     b = c;
    // }
}
