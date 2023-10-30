#include <stdio.h>
#include <ctype.h>

int main() {
   printf("| Character | isalnum | isalpha | iscntrl | isdigit |\n");
   printf("| :-------: | ------: | ------: | ------: | ------: |\n");
   for (int i = 32; i < 127; i++) {
       printf("|  %3c      | %3d     | %3d     | %3d     | %3d     | \n", i, isalnum(i), isalpha(i), iscntrl(i), isdigit(i));
   }
   printf("\n\n");

   printf("| Character | isgraph | islower | isprint | ispunct | \n");
   printf("| :-------: | ------: | ------: | ------: | ------: | \n");
   for (int i = 32; i < 127; i++) {
       printf("|  %3c      | %3d     | %3d     | %3d     | %3d     | \n", i, isgraph(i), islower(i), isprint(i),ispunct(i));
   }
   printf("\n\n");

   printf("| Character | isspace | isupper | isxdigit | tolower | toupper | \n");
   printf("| :-------: | ------: | ------: | -------: | ------: | ------: |\n");
   for (int i = 32; i < 127; i++) {
       printf("|  %3c      | %3d     | %3d     | %3d      | %3d     | %3d     | \n", i, isspace(i), isupper(i), isxdigit(i), tolower(i),toupper(i));
   }
   printf("\n\n");
   return 0;
}
