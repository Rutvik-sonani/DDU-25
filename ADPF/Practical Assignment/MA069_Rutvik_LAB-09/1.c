// 1. Write a structure to input the roll number, name, and marks of 5 subjects of a
// student. Print input data, total marks, and percentages in a proper format. (Use
// array within structures to store multiple students and create separate functions for
// printing, collecting, and computing student information)

#include<stdio.h>

struct StudentData{
    int rno;
    char name[25];
    int marks[5];
    int total;
    float perce;
}stud;

typedef struct StudentData StudentData;

void getData(StudentData *s1){

    printf("Enter student rollno : ");
    scanf("%d",&s1->rno);

    printf("Enter student name : ");
    scanf("%s",s1->name);

    for(int i=0;i<5;i++){
        printf("Enter student sub%d mark : ",i);
        scanf("%d",&s1->marks[i]);
    }
}

void calc(StudentData *s3){

    s3->total = 0;
    for(int i=0;i<5;i++){
        s3->total = s3->marks[i] + s3->total;
    }

    s3->perce = s3->total*100/(5*100);
}

void displayData(StudentData *s){
    printf("\nRollno : %d",s->rno);
    printf("\nName : %s",s->name);
    for(int i=0;i<5;i++){
        printf("\nSub%d mark : %d",i,s->marks[i]);
    }

    printf("\n\nTotal Marks : %d",s->total);
    printf("\n\nPercentage : %.2f",s->perce);
}

int main(){
    StudentData s;
    getData(&s);
    calc(&s);
    displayData(&s);
    return 0;
}