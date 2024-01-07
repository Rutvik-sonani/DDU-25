#include <stdio.h>
#include "recur.c"

int fun()
{
    static int a = 20;
    a++;
    printf("\nValue is %d", a);
}
int a = 20;
int main()
{
    auto int i = 10;
    pf(i);
    fun();
    fun();
    return 0;
}