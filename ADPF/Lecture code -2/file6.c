//Read Char
//Read from a text file
#include <stdio.h>
#include <stdlib.h>
int main()
{
   int num;
   FILE *fptr;
   if ((fptr = fopen("sample6.txt","a+")) == NULL){
       printf("Error! opening file");
       exit(1);
   }
   fseek(fptr, 0, SEEK_END);
//    putc('H',fptr);
//    putc('E',fptr);
//    putc('L',fptr);
//    putc('L',fptr);
//    putc('O',fptr);
   printf("%c",getc(fptr));
   printf("%c",getc(fptr));
   printf("%c",getc(fptr));
   printf("%c",getc(fptr));
   printf("%c",getc(fptr));
   printf("%c",getc(fptr));
   printf("%c",getc(fptr));
   printf("%c",getc(fptr));
   putc('Z',fptr);
   putc('Z',fptr);
   putc('Z',fptr);
   fclose(fptr); 
   return 0;
}