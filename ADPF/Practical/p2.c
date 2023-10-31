#include<stdio.h>
#include<conio.h>

int main(){
    int i=0,n,arr[20];

    printf("Enter the number of values: ");
    scanf("%d", &n);

    while (n > 0) {
        arr[i] = n % 2;
        n = n / 2;
        i++;
    }
     for (int j = i - 1; j >= 0; j--) {
        printf("%d", arr[j]);
    }

    return 0;
}