#include <stdio.h>
#include <string.h>
int main()
{
    char a[10];
    scanf("%10c",a);
    a[9] = '\0';
    puts(a);
    putchar('\n');


    //Dangling characters
    
    // char c[]={'a','b','c','d','e','\0'};
    // char c[]="ABCDE";
    // char g[15] = "Challo World!!!";
    // char g[30]= " ";
    // char c[15] = "Hello World!!!";
    // char s[15]= "Hello World!!!";
    // char cp[15]= "abcdef";
    // printf("cp = %d\tg = %d\n",cp,g);
    // printf("cp = %s\tg = %s\n",cp,g);
    // printf("Execute CPY -- %d\n",strcpy(cp,c));
    // printf("Execute CPY -- %s\n",strcpy(cp,c));
    // printf("after cpy cp = %s\n",cp);
    // // strcat(g,s);
    // printf("Execute Cat -- %d\n",strcat(g,s));
    // printf("after cat g = %s\n",g);
    // strcat(g,"Test  ");
    // printf("after cat2 g = %s\n",g);
    // strncat(g,"QWERTY",4);
    // printf("after cat2 g = %s\n",g);
    // printf("Length of cp is = %d\n",strlen(cp));
    // printf("Compare cp and s is = %d\n",strcmp(cp,s));
    // printf("Find W in cp = %d\n",strchr(cp,'W'));
    // printf("Find W in cp = %s\n",strchr(cp,'W'));
    // printf("Find rld in cp = %d\n",strstr(cp,"rld"));
    // printf("Find rld in cp = %s\n",strstr(cp,"rld"));

    // int i = 0,j;
 
    // while(c[i]!='\0'){
    //     g[i] = c[i];
    //     i++;
    // }
    // g[i++] = '-';
    // j=0;
    // while(s[j]!='\0'){
    //     g[i] = s[j];
    //     i++;j++;
    // }
    // g[i] = '\0';


    // while(c[i]!='\0'){
    //     s[i] = c[i];
    //     i++;
    // }
    // s[i] = '\0';
    // c[1] = 'E';
    // s[2] = 'L';
    // printf("%s - %s\n",c,s);
    // printf("%s\n",g);
    // i=0;
    // while(c[i]!='\0'){
    //     printf("%d - %d = %d\n",c[i],s[i],c[i]-s[i]);
    //     i++;
    // }
 


    // scanf("%c",&ch);
    // scanf("%s",c);
    // gets(c);
    // int cnt = 0;
    // while(ch != '\n')
    // {
    //     ch = getchar();
    //     c[cnt++] = ch;
    // }
    // c[cnt]='\0';
    // scanf("%5s",c);
    // for (int i = 0;i<10;i++)
    //     printf("%c=%d - ",c[i],c[i]);
    // printf("\n");
    // printf("%s",c);
    // scanf("%5s",c);
    // printf("\n");
    // printf("%s",c);
    // scanf("%5s",c);
    // printf("\n");
    // printf("%s",c);
    // scanf("%5s",c);
    // printf("\n");
    // printf("%s",c);




    // for (int i = 0;i<5;i++)
    //     c[i] = i + 65;
    // // for (int i = 0;i<5;i++)
    // //     printf("%c - ",c[i]);
    // c[5] = '\0';
    // for (int i = 6;i<10;i++)
    //     c[i] = i + 65;
    // for (int i = 0;i<10;i++)
    //     printf("%c - ",c[i]);
    // printf("\n");
    // printf("%s",c);
    return 0;
}