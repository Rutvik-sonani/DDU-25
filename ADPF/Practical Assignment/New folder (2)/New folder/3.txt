// 3. Write a simple program to give a demonstration of Union in C.
#include<stdio.h>
#include <string.h>

union Student{
    int rno;
    char name[20];
};

int main(){
    union Student std;

    std.rno = 101;
    printf("Roll no : %d",std.rno);
    
    strcpy(std.name,"rutvik");
    printf("\nName : %s",std.name);

    return 0;
}