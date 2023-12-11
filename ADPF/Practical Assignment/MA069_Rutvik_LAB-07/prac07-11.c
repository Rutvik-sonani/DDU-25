#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];  
    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (!isalpha(str[i])) {
            for (int j = i; str[j] != '\0'; j++) {
                str[j] = str[j + 1];
            }
            i--; 
        }
    }

    printf("new String : %s\n", str);

    return 0;
}
