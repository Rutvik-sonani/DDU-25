// void swap(int *a, int *b){
//     int tmp = *a;
//     *a = *b;
//     *b = tmp;
// }

// void main(){
//     int s=10;
//     int a=20;
//     swap(&s,&a);
// }

#include<stdio.h>

// void swap(int a, int b){
//     int tmp = a;
//     a = b;
//     b = tmp;
// } will not work

void main(){
    int a=33;
    int b=43;
    swap(a,b);
    printf("%d %d",a,b);
}