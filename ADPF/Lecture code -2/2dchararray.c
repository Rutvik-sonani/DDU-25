#include <stdio.h>
int main()
{
    char a0[] = "Hello-0";
    char a1[] = "Hello-1";
    char a2[] = "Hello-2";
    char a3[] = "Hello-3";
    char a4[] = "Hello-4";
    char a[5][10] = {"Hello-0", "Hello-0", "Hello-0",
                     "Hello-0", "Hello-0"};
    char b[5][10] = {{'H', 'e', 'l', 'l', 'o', '-', '0', ' '},
                     {'H', 'e', 'l', 'l', 'o', '-', '1'},
                     {'H', 'e', 'l', 'l', 'o', '-', '2'},
                     {'H', 'e', 'l', 'l', 'o', '-', '3'},
                     {'H', 'e', 'l', 'l', 'o', '-', '4'}};

    char c[5][10] = {'H', 'e', 'l', 'l', 'o', '-', '0',
                     'H', 'e', 'l', 'l', 'o', '-', '1',
                     'H', 'e', 'l', 'l', 'o', '-', '2',
                     'H', 'e', 'l', 'l', 'o', '-', '3',
                     'H', 'e', 'l', 'l', 'o', '-', '4'};

    printf("%s\t%s\t%s\t%s\n", a0, a[0], b[0], c[0]);
    printf("%s\t%s\t%s\t%s\n", a1, a[1], b[1], c[1]);
    printf("%s\t%s\t%s\t%s\n", a2, a[2], b[2], c[2]);
    printf("%s\t%s\t%s\t%s\n", a3, a[3], b[3], c[3]);
    printf("%s\t%s\t%s\t%s\n", a4, a[4], b[4], c[4]);

    for (int i = 0; i < 10; i++)
        printf("%c\t%d\n", b[0][i], b[0][i]);

    char d[5][] = {"Hello-4", "Hello-3", "Hello-1",
                   "Hello-2", "Hello-0"};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            printf("%c", d[i][j]);
        putchar('\n');
    }
    return 0;
}