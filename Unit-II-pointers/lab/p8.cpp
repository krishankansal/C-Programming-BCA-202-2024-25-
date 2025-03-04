// Program-8 : Program to initialize a pointer
#include<stdio.h>
#include<conio.h>
int main(){
    int a = -12;
    int *p = &a;
    printf("\n The value of a = %d", a);
    printf("\n The value of a = %d", *p);
    printf("\n The address of a = %x", &a);
    printf("\n The address of a = %x", p);
    printf("\n The address of p = %x", &p);
    return 0;
}