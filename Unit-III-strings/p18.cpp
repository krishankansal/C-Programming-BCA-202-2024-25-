#include<stdio.h>

mystrcpy(char *d, char *s){
    while(*s != '\0'){
        *d = *s;
        d++;
        s++;
    }
    *d = '\0';
    
}
int main(){

    char s[] = "Hello World";
    char d[30];
    printf("s = %s",s);
    printf("\n d = %s",d);
    mystrcpy(d,s);
    printf("\n After using mystrcpy() function");
    printf("\n s = %s",s);
    printf("\n d = %s",d);
    return 0;
}