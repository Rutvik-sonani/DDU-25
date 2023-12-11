#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. String Length\n");
        printf("2. String Copy\n");
        printf("3. String Compare\n");
        printf("4. String Concatenate\n");
        printf("5. Convert to Upper Case\n");
        printf("6. Convert to Lower Case\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                scanf("%s", str1);
                printf("Length of the string: %zu\n", strlen(str1));
                break;

            case 2:
                printf("Enter the source string: ");
                scanf("%s", str1);
                strcpy(str2, str1);
                printf("Copied string: %s\n", str2);
                break;

            case 3:
                printf("Enter the first string: ");
                scanf("%s", str1);
                printf("Enter the second string: ");
                scanf("%s", str2);
                if (strcmp(str1, str2) == 0) {
                    printf("Strings are equal.\n");
                } else {
                    printf("Strings are not equal.\n");
                }
                break;

            case 4:
                printf("Enter the first string: ");
                scanf("%s", str1);
                printf("Enter the second string: ");
                scanf("%s", str2);
                strcat(str1, str2);
                printf("Concatenated string: %s\n", str1);
                break;

            case 5:
                printf("Enter a string: ");
                scanf("%s", str1);
                for (int i = 0; str1[i] != '\0'; ++i) {
                    str1[i] = toupper(str1[i]);
                }
                printf("Uppercase string: %s\n", str1);
                break;

            case 6:
                printf("Enter a string: ");
                scanf("%s", str1);
                for (int i = 0; str1[i] != '\0'; ++i) {
                    str1[i] = tolower(str1[i]);
                }
                printf("Lowercase string: %s\n", str1);
                break;

            case 0:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 0);

    return 0;
}
