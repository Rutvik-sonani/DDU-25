// 2. Take the input for book category, book code, book title, author name, price, edition,
// and the number of copies available for 10 books using structure. Print the input
// data values along with the total amount for all books in a proper format. (make
// proper use of an array of structures and functions)

#include<stdio.h>

struct BookData{

    char bookcat[50],booktitle[50],aname[50];
    int bookcode,price,edition,noofcopy,totalamt;

}book;

typedef struct BookData BookData;

void getData(BookData *b1){
    printf("Enter Book Category : ");
    scanf("%s",b1->bookcat);

    printf("Enter Book title : ");
    scanf("%s",b1->booktitle);

    printf("Enter Auther name : ");
    scanf("%s",b1->aname);

    printf("Enter Book code : ");
    scanf("%d",&b1->bookcode);

    printf("Enter Book Price : ");
    scanf("%d",&b1->price);

    printf("Enter Book Edition : ");
    scanf("%d",&b1->edition);

    printf("Enter Book no of copy : ");
    scanf("%d",&b1->noofcopy);
}

void calc(BookData *b1){
    b1->totalamt = b1->noofcopy * b1->price;
}

void displayData(BookData *b1){
    printf("\nBook Category : %s",b1->bookcat);
    printf("\nBook Title : %s",b1->booktitle);
    printf("\nBook Auther name : %s",b1->aname);
    printf("\nBook Code : %d",b1->bookcode);
    printf("\nBook Price : %d",b1->price);
    printf("\nBook Edition : %d",b1->edition);
    printf("\nBook no of copy : %d",b1->noofcopy);
    printf("\nBook Total amt : %d",b1->totalamt);
}

int main(){
    BookData b;

    getData(&b);
    calc(&b);
    displayData(&b);

    return 0;
}