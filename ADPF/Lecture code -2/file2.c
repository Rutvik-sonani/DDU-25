// Read from a text file
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    FILE *fptr;
    if ((fptr = fopen("sample1.txt", "r")) == NULL)
    {
        printf("Error! opening file");
        exit(1);
    }
    fscanf(fptr, "%d", &num);
    printf("Value of n=%d\n", num);
    fscanf(fptr, "%d", &num);
    printf("Value of n=%d\n", num);
    fscanf(fptr, "%d", &num);
    printf("Value of n=%d\n", num);
    fclose(fptr);
    return 0;
}