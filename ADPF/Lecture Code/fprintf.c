 #include <stdlib.h>
 #include <stdio.h>
 int main()
 {
 int i;
 printf("Input an integer:");
 /* read an integer from the standard input stream */
 if(fscanf(stdin,"%d", &i))
    printf("The integer read was: %i\n", i);
 else
 {
 fprintf(stderr,"Error reading an integer from stdin.\n");
 exit(1);
 }
 return 0;
 }
