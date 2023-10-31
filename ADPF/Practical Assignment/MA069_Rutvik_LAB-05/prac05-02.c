#include <stdio.h>

int main() {
    int sno;
    char sname[30],stype,scom;
    float samount;
    float comm;

    printf("Salesman number: ");
    scanf("%d", &sno);
    printf("Salesman name: ");
    scanf("%s", sname);
    printf("Sales amount: ");
    scanf("%f", &samount);
    printf("Saleman type : ");
    scanf(" %c", &stype); 

    if (stype == 'P') {
        comm = 0.09;
        scom = samount * 0.09;
    } else if (stype == 'D') {
        comm = 0.05;
        scom = samount * 0.05;
    } else if (stype == 'H') {
        comm = 0.02;
        scom = samount * 0.02;
    }

    printf("Salesman report\n");
    printf("-------------------------------------------------------------\n");
    printf("Salesman number: %d\n", sno);
    printf("Salesman name: %s\n", sname);
    printf("Sales amount: %.2f\n", samount);
    printf("Commission (%%): %.2f%%\n", comm * 100);
    printf("Commission (Rs.): %.2f\n", scom);
    printf("-------------------------------------------------------------\n");
    printf("Net amount: %.2f\n", samount - scom);

    return 0;
}
