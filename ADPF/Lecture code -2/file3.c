//Write to a binary file using fwrite()
#include <stdio.h>
#include <stdlib.h>
struct threeNum
{
   int n1, n2, n3;
};
int main()
{
   int n;
   struct threeNum num;
   FILE *fptr;
   if ((fptr = fopen("sample2.bin","wb")) == NULL){
       printf("Error! opening file");
       exit(1);
   }
   for(n = 1; n < 5; ++n)
   {
      num.n1 = n;
      num.n2 = 10*n;
      num.n3 = 20*n;
      fwrite(&num, sizeof(struct threeNum), 1, fptr); 
   }
   fclose(fptr); 
   return 0;
}