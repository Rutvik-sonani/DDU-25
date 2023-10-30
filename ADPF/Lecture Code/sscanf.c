#include <stdio.h>
 int main()
 {
 int error;
 char inbuf[256];
 int i;
 char c;
 while(1)
 {
  error = i = 0;
  printf("Enter an integer");
  gets(inbuf);    /* get complete input line */
  while(inbuf[i] == ' ')
  i++;          /* skip spaces */
  if(inbuf[i] == '-' || inbuf[i] == '+')
  i++;
  while((c = inbuf[i++])!='\0')
              /* while string end with NUL */
  {
   if(c>'9' || c<'0')       /* non-digit ? */
   {
    printf("Non-Numeric Character %c\n",c);
    error = 1;
    break;
   }
  }
  if(!error)       /* was everything OK ? */
  {
   int num;             /* local variable */
   sscanf(inbuf,"%d",&num);      /* conversion */
   printf("Number was %d\n",num);
   break;
  }
 }
 return 0;
 }
