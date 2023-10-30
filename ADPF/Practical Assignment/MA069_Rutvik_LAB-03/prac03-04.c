#include<stdio.h>
#include<conio.h>

int main(){
    char ch;

    printf("Enter any char : ");
    scanf("%c",&ch);

    if(ch == 'a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U'){
        printf("Character is a Vowel");
    }else{
        printf("Character is a Consonant");
    }

    return 0;
}