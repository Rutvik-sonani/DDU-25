#include <stdio.h>
#define x 0
int a =10;
int main()
{
    //int a=10;
    {
        int a = 20;
        printf("a1 = %d\n",a);
    }
    printf("a2 = %d\n",a);
    {
        printf("a3 = %d\n",a);
    }

    if(a<5)
        if(a>6)
            if(a==10)
                printf("a4 = %d\n",a);
    

    if(a>18)
        printf("a5 = %d\n",a);
    else
        printf("a6 = %d\n",a);

    int b = 51;

    if(a>=11)
    {
        a++;
        printf("a7 = %d\n",a);
    }
    else if(b == 50)
    {
        b++;
        printf("b1 = %d\n",b);
    }
    else
    {
        printf("a8 = %d\n",a);
        printf("b2 = %d\n",b);
    }
    const int z = 0;
    switch(0)
    {
        
        case 'a':
        // case "a":
        case 3:
        case 2:
            printf("Inside Switch A = 0-3\n");
            break;
        case 4:
        case 5:
        case 6:
            printf("Inside Switch A = 4-6\n");
            break;
        case 7:
        case 8:
        case 9:
            printf("Inside Switch A = 7-9\n");
            break;
        default:
            printf("Inside Switch A = default\n");
            break;
    }
    a = 5;
    if(a>25){
        if(a>75)
            printf("a is in range\n");
    }
    else
        printf("a is less \n");

    return 0;
}
