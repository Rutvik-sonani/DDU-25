#include<stdio.h>

int main(){
    int n =5,m=5;
    for(int i=1;i<=n;i++)  
    {  
       for(int j=1;j<=m-1;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=2*i-1;k++)  
       {  
         printf("%d",i);  
       }  
       
       m--;  
     
      printf("\n");  
    }  
    return 0;  
}