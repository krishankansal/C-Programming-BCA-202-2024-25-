// Program 17 - Program to copy one string into another
#include<stdio.h>
#include<string.h>
int main(){

    char s[] = "Hello World";
    char d[30];
    printf("s = %s",s);
    printf("\n d = %s",d);
    strcpy(d,s);
    printf("\n After using strcpy() function");
    printf("\n s = %s",s);
    printf("\n d = %s",d);
    return 0;
}

