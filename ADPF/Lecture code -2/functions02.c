#include <stdio.h>

void fun(int* );
void fun2(int []);
// int[] fun3(int []);
int main()
{
    int n = 10;
    int q[] = {10,20,30};
    printf("\nn = %d with address %d\n",n,&n);
    fun(&n);
    printf("\nn = %d with address %d\n",n,&n);

    putchar('\n');
    putchar('\n');

    printf("\nq = %d %d with %d %d %d\n",q,&q,&q[0],&q[1],&q[2]);
    fun2(q);
    printf("\nq = %d with %d %d %d\n",q,&q[0],&q[1],&q[2]);

    return 0;
}

// int [] fun3(int q[])
// {
//     return q;
// }
void fun2(int q[])
{
    printf("------Entered into Function------\n");
    printf("\nq = %d %d with %d %d %d\n",q,&q,&q[0],&q[1],&q[2]);
    q[0] += 10;
    q[1] += 10;
    q[2] += 10;
    printf("\nq = %d with %d %d %d\n",&q,&q[0],&q[1],&q[2]);
    // int* add;
    // add = &q;
    // *add = 100;
    // printf("\nq = %d with %d %d %d\n",&q,&q[0],&q[1],&q[2]);
    printf("------Exited from Function------\n");
}
void fun(int* a)
{
    printf("------Entered into Function------\n");
    printf("\na = %d with address %d\n",*a,&a);
    *a += 10;
    printf("\na = %d with address %d\n",*a,&a);
    printf("------Exited from Function------\n");
}