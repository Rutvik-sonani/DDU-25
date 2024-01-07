#include <stdio.h>

int main()
{
    // int a[3][3];
    // int b[] = {1,2,3,4,5,6};
    // int c[][3] = {1,2,3,4,5,6,7,8,9};
    // int d[5][2] = {1,2,3,4,5,6,7,8,9};
    // char e[5][2];
    // for(int i = 0; i<5; i++)
    // {
    //     for(int j = 0; j<2;j++)
    //         printf("[%d][%d]->%d\n",i,j,&e[i][j]);
    // }

    int aa[6][2] = {1,1,
                    2,4,
                    3,9,
                    4,16,
                    5,25,
                    6,36
                };
    // for(int i = 0; i<6; i++)
    // {
    //     for(int j = 0; j<2;j++)
    //         printf("[%d][%d]->%d = %d\n",i,j,&aa[i][j],aa[i][j]);
    // }
    int bb[3][5] = {{1,2,3},
                    {6,7,8,9},
                    {11,12,13}
                };
    // int bb[3][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    // for(int i = 0; i<3; i++)
    // {
    //     for(int j = 0; j<5;j++)
    //         printf("[%d][%d]->%d = %d\n",i,j,&bb[i][j],bb[i][j]);
    // }
    int x[4][2] = { { 1, 2 },
                    { 3, 4 },
                    { 5, 6 }
                };
    // int x[4][2] = {1,2,3,4,5,6};
    int cc[3][3]={0};
    int dd[3][3]={0};
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3;j++)
            scanf("%1d",&cc[i][j]);
    }
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3;j++)
            dd[j][i] = cc[i][j];
    }
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3;j++)
            printf("[%d][%d]-> %d\n",i,j,dd[i][j]);
    }
    return 0;
}