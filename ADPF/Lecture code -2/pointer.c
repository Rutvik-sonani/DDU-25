#include <stdio.h>
#include <stdlib.h>
int* test(int *a,int size)
{
    int i = 0;
    static int j = 999;
    while(i<size)
    {
        printf("a[%d] = %d\n",i,*(a+i));
        i++;
    }
    return &j;
}
struct point{
    int x;
    int y;
}pt={25,20};
void add(int a, int b)
{
    printf("a+b = %d",a+b);
}
int main()
{
    int *p;
    p = (int*)malloc(sizeof(int)*3);
    *p = 20;
    scanf("%d",p+1);
    scanf("%d",p+2);
    printf("p  = %d %d %d \n",*p,*(p+1),*(p+2));
    // void (*p)(int,int);
    // p = add;
    // (*p)(10,20);
    // printf("x = %d y = %d \n",pt.x,pt.y);
    // struct point *pt1;
    // pt1 = &pt;
    // printf("x = %d y = %d \n",(*pt1).x,(*pt1).y);
    // printf("x = %d y = %d \n",pt1->x,pt1->y);
    // printf("%d  %d\n",pt1, &pt);
    // int a[10]= {1,2,3,4,5,6,7,8,9,11};
    // int b[6]= {11,22,33,44,55,66};
    // int c[3]= {111,222,333};
    // int aa =10, bb=20, cc=30;
    // int *p1[5]={&aa,&bb,&cc,NULL,NULL};
    // int *p2[5]={a,b,c,NULL,NULL};
    // printf("p1[0] = %d p2[1] = %d \n",*p1[0],*p1[1]);
    // for(int i = 0;i<5;i++)
    // {
    //     printf("%d - ",*(p2[2]+i));
    // }
    // p1[0] = &a;
    // int *p1, *p2;
    // p1 = a;
    // p2 = a+4;
    // printf("p1 = %d p2 = %d \n",*p1,*p2);
    // printf("p1<p2 = %d p1>p2 = %d \n",p1<p2,p1>p2);
    // printf("p1-p2 = %d p1+p2 =  \n",p1-p2);
    // p1 = a;
    // p2 = a+1;
    // printf("p1 == p2 = %d \n",p1==p2);

    // printf("j = %d\n",*p);
    // int* p = test(a,10);
    // printf("j = %d\n",*p);
    // const int b = 20;
    // int a = 10;
    // int *p;
    // p = &a;
    // *p = 12;
    // printf("a = %d\n",*p);
    // p = &b;
    // *p = 30;
    // printf("b = %d\n",*p);
    // // b = 99;
    // // printf("b = %d\n",*p);
    return 0;
}