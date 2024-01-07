#include <stdio.h>
struct{
    char name[25];
    char mobile[10];
    int s1;
    int s2;
    int s3;
    int s4;
    int s5;
}stud= {"ABC","92389130",12,12,12,12,12},q,w,e,r,t,y[100];

struct Student{
    char name[25];
    char mobile[13];
    int s1;
    int s2;
    int s3;
    int s4;
    int s5;
}stud1= {"DEF","8888888",2,2,2,2,2};

struct StudentCase{
    char name[25];
    char mobile[13];
    struct {
        int s1;
        int s2;
    }sess1;
    struct {
        int s1;
        int s2;
    }sess2;
    struct {
        int sub[5];
    }sess3;
}s = {"QAZ","12345"};

void display(struct Student stud)
{
    printf("Name: %s\n",stud.name);
    printf("Mobile: %s\n",stud.mobile);
    printf("marks: %d %d %d %d %d\n",stud.s1,stud.s2,stud.s3,stud.s4,stud.s5);
}

struct Point
{
    int xy[2];
}p1 = {1,2};

void fun(struct Point p)
{
    p.xy[0] = 5;
    p.xy[1] = 5;
}

void fun2(struct Point p[])
{
    p[0].xy[0] = 55;
    p[0].xy[1] = 55;
}
void disp(struct Point p)
{
    // struct Student ss;
    // struct Sample sss;
    printf("x: %d  y: %d\n",p.xy[0],p.xy[1]);
}

union sample{
    char c[8];
    short i;
    float f;

}u1;

enum days{mon=1001,tue,wed,thu=2001,fri,sat,sun = 5000};
int main()
{
    // u1.c = 65;
    // u1.i = 365;
    u1.f = 365.0;
    printf("%c - %d\n",u1.c,u1.c);
    printf("%d\n",u1.i);
    printf("%f\n",u1.f);
    printf("%d\n",sizeof(u1));

    enum days start, end;
    start = tue;
    end = fri;
    printf("start = %d\n",start);
    printf("end = %d\n",end);
    printf("end = %d\n",thu);
    end = sun;
    printf("end = %d\n",end);
    // start = 45;
    printf("start = %d\n",start);

    // struct Sample{
    //     int x;
    // };
    // // disp(p1);
    // // fun(p1);
    // // disp(p1);

    // struct Point p2[3];
    // p2[0].xy[0] = 1;
    // p2[0].xy[1] = 2;
    // p2[1].xy[0] = 3;
    // p2[1].xy[1] = 4;
    // p2[2].xy[0] = 5;
    // p2[2].xy[1] = 6;
    // disp(p2[0]);
    // disp(p2[1]);
    // disp(p2[2]);
    // fun2(p2);
    // printf("\n");
    // disp(p2[0]);
    // disp(p2[1]);
    // disp(p2[2]);
    // printf("\n");
    // printf("\n");
    // disp(p1);
    // p1 = p2[0];
    // disp(p1);

    // int x; 
    // int y;
    // float xx;
    // float yy;

    // typedef int Pointq;
    // typedef int Marks;
    // Pointq a;
    // Pointq b;
    // a =4;
    // b = 5.5;
    // Marks q;
    // Marks w;
    // printf("%d %d",a,b);

    // typedef struct{ int x;
    // int y;
    // } Cord;
    // Cord p3;
    // p3.x = 5;
    // p3.y = 6;
    
    // Cord p4[2] = {{10,10},{20,20}};
//----------------------
    // p2[0].xy[0] == p2[1].xy[0]

    // printf("Name: %s",stud.name);
    // struct Student st = {"QWERTY","111111",23,23,23,23,23};
    // struct Student st1;
    // struct Student starr[5];
    // st1.s1 = 45;
    // struct Student st2 = {"QW","1222",23};
    // // printf("Name: %s",stud.name);
    // // printf("Mobile: %s",stud.mobile);
    // display(stud1);
    // display(st2);
    // printf("\n\nSize of: %d",sizeof(stud1));
    // s.sess1.s1 = 23;   
    // s.sess1.s2 = 12;

    // s.sess2.s1 = 14;   
    // s.sess2.s2 = 20;   

    // s.sess3.sub[0] = 12;
    // s.sess3.sub[1] = 12;
    // s.sess3.sub[2] = 12;
    // s.sess3.sub[3] = 12;
    return 0;
}