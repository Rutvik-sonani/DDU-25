#include<stdio.h>
void organizeEvent(){
    printf("Vicharu");
}
void hetal(void (*kaam)()){
    kaam();
}
void main(){
    hetal(organizeEvent);
}