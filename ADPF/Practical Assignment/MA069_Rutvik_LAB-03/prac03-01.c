#include<stdio.h>
#include<conio.h>

int main(){
    int mark;

    printf("Enter mark : ");
    scanf("%d",&mark);

    if(mark>=90){
        printf("Grade : A");
    }else if(mark>=80 && mark<90){
        printf("Grade : B");
    }else if(mark>=65 && mark<80) {
        printf("Grade : C");
    }else if(mark < 65){
        printf("Grade : D");
    }else{
        printf("Invalid Mark");
    }

    return 0;
}