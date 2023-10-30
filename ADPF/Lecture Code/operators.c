#include <stdio.h>
#define PI 3.14f
#define T 'A'
#define W "HELLO"

int main(){

    char z = 'A';
    int v = 1090;
    printf("z = %d v = %d\n",z,v);
    z = v;
    printf("z = %d v = %d\n",z,v);

    float l = 1.111;
    printf("l = %f v = %d\n",l,v);
    v = (int)l;
    printf("l = %f v = %d\n",l,v);
    v = 1000;
    printf("v=%d=\n",v);
    printf("v=%8d=\n",v);
    printf("v=%-8d=\n",v);
    

    // printf("Size of int is %d\n",sizeof(int));
    // printf("Size of float is %d\n",sizeof(float));
    // printf("Size of double is %d\n",sizeof(double));
    // printf("Size of PI is %d\n",sizeof(PI));
    // printf("Size of T is %d\n",sizeof(T));
    // printf("Size of W is %d\n",sizeof(W));

    int a = +10;
    int b = -10;
    // printf("a=%d  b=%d\n",+a,+b);
    a = b = 10;
    // printf("a++=%d ",a++);
    // printf("b--=%d \n",b--);
    // printf("a=%d  b=%d\n",a,b);
    // printf("++a=%d ",++a+b);
    // printf("--b=%d \n",--b);
    // printf("a=%d  b=%d\n",a,b);

    a = b = 10;

    int c ;
    c = 10,20,30,40;
    int d;
    d = (10,20,30,40);
    // printf("c = %d  d = %d\n",c,d);

    // printf("exp = %d \n",5*2/4%3);


    // printf("relation = %d\n",10>5);
    // printf("relation = %d\n",10<5);
    // printf("relation = %d\n",10>=10);
    // printf("relation = %d\n",5<=5);
    // printf("relation = %d\n",10==10.1);
    // printf("relation = %d\n",10!=10.1);
    // printf("relation = %d\n",'A'!='a');


    char x = 'A';
    char y = 'B';
    // printf("logical + relation = %d\n",x==y || x<y);
    // printf("logical + relation = %d\n",x==y && x<y);
    // printf("logical + relation = %d\n",!(x==y));

    a = 2;
    b = 2;

    // printf("Bitwise = %d\n",x = 1);
    // printf("Bitwise = %d\n",x = x<<1);
    // printf("Bitwise = %d\n",x = x<<1);
    // printf("Bitwise = %d\n",x = x<<1);
    // printf("Bitwise = %d\n",x = x<<1);
    // printf("Bitwise = %d\n",x = x<<1);
    // printf("Bitwise = %d\n",x = x<<1);
    
    // printf("Bitwise = %d\n",x = x>>1);
    // printf("Bitwise = %d\n",x = x>>1);
    // printf("Bitwise = %d\n",x = x>>1);
    // printf("Bitwise = %d\n",x = x>>1);
    // printf("Bitwise = %d\n",x = x>>1);
    b=4;
    // printf("Bitwise & = %d\n",a&b);
    // printf("Bitwise & = %d\n",a|b);

    return 0;
}
