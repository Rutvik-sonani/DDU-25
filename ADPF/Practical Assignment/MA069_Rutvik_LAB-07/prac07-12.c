#include <stdio.h>
#include <ctype.h>

int main() {
    char inputString[100];  
    int alphabets = 0, digits = 0, specials = 0, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    scanf("%99[^\n]", inputString);

    for (int i = 0; inputString[i] != '\0'; i++) {
        char ch = inputString[i];

        if (isalpha(ch)) {
            alphabets++;
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(ch)) {
            digits++;
        } else {
            specials++;
        }
    }

    printf("\nTotal Alphabets: %d", alphabets);
    printf("\nTotal Digits: %d", digits);
    printf("\nTotal Special Characters: %d", specials);
    printf("\nTotal Vowels: %d", vowels);
    printf("\nTotal Consonants: %d\n", consonants);

    return 0;
}
