#include<stdio.h>
#include<conio.h>

int main(){
    int m,n;

    printf("Enter M number value : ");
    scanf("%d",&m);

    printf("Enter N number value : ");
    scanf("%d",&n);

    int Q = m/n;
    int R = m%n;

    printf("quotient : %d\n",Q);
    printf("remainder : %d",R);

    return 0;
}