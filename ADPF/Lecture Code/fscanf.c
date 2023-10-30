 #include <stdio.h>
 int main()
 {
 
 int first, second;
 fprintf(stdout,"Enter two ints in this line:  ");
 fscanf(stdin,"%d %d", &first, &second);
 fprintf(stdout,"Their sum is: %d.\n", first + second);
 return 0;
 }
