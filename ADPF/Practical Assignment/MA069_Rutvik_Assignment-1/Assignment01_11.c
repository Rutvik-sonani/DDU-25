#include<stdio.h>

void main(){
    int x;

    printf("Enter X value : ");
    scanf("%d",&x);

    int y=0;

do

{

y = (y * 10) + (x % 10);

x = x / 10;

}

while(x != 0);

	printf("Y : %d",y);
}