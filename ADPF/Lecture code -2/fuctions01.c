#include <stdio.h>

int add(int , int );
void matadd(int [10][10], int [10][10], int[10][10]);
int main()
{
    // int a = 10;
    // int n = 1;
    // for(int i = 1; i<=10;i++)
    // {
    //     if(i%2 == 0)
    //         n = 2;
    //     else 
    //         n = 1;    
    //     a = add(a,n);
    // }
    // printf("\na = %d with address %d\n",a,&a);
    // int cc[3][3]={0};
    // printf("\ncc = %d cc = %d\n",cc[0][0],&cc[0][0]);

    int cc[10][10]={0};
    int dd[10][10]={0};
    int aa[10][10]={0};
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3;j++)
            scanf("%1d",&cc[i][j]);
    }
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3;j++)
            scanf("%1d",&dd[i][j]);
    }
    // for(int i = 0; i<3; i++)
    // {
    //     for(int j = 0; j<3;j++)
    //         aa[i][j] = dd[i][j] + cc[i][j];
    // }
    matadd(cc,dd,aa);   
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3;j++)
            printf("[%d][%d]-> %d\n",i,j,aa[i][j]);
    }
    return 0;
}

void matadd(int cc[10][10], int dd[10][10], int aa[10][10])
{
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3;j++)
            aa[i][j] = dd[i][j] + cc[i][j];
    }
}
int add(int a, int n)
{
    int r = a+n;
    printf("Inside function a = %d with address %d\n",a,&a);
    return r;
    // return a+n;
}