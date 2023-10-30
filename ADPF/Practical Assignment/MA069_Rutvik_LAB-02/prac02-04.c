#include<stdio.h>
#include<conio.h>

int main(){
    int i,p,r,n;

    printf("Enter P value : ");
    scanf("%d",&p);

    printf("Enter R value : ");
    scanf("%d",&r);

    printf("Enter N value : ");
    scanf("%d",&n);

    i = p*r*n/100;

    printf("Interest is %d",i);

    return 0;
}