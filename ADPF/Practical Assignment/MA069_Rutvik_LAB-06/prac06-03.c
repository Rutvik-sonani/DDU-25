#include <stdio.h>

int main() {
    char ch;

l1:
    printf("Enter any character: ");
    scanf(" %c", &ch); 

    if ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
        printf("%c is a vowel.\n",ch);
    } else {
        printf("%c is not a vowel.\n",ch);
    }

    int op;

    printf("You want to re-run this operation then enter 1 otherwise 0 for exit : ");
    scanf(" %d", &op);

    if (op == 1) {
        goto l1; 
    } else {
        return 0;
    }

    return 0;
}
