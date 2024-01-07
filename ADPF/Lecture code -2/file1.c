//Write to a text file
#include <stdio.h>
#include <stdlib.h>
int main()
{
   int num;
   FILE *fptr;
   fptr = fopen("sample1.txt","w");
   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
   printf("Enter num: ");
   scanf("%d",&num);
   fprintf(fptr,"%d\n",num);
   fprintf(fptr,"%d\n",num+1);
   fprintf(fptr,"%d\n",num+2);
   fclose(fptr);
   return 0;
}