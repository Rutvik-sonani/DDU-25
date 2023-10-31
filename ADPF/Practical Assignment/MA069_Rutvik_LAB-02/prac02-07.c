#include<stdio.h>
#include<conio.h>

int main(){
    int n;

    printf("Enter Any number value : ");
    scanf("%d",&n);

    // if(n%2==0){
    //     printf("%d is a even number.");
    // }else{
    //     printf("%d is a odd number.");
    // }

    (n%2==0) ? printf("%d is a even number.",n) : printf("%d is a odd number.",n);

    return 0;
}