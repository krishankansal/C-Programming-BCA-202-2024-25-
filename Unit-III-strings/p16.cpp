// Program 16 - Write a function to calculate the length of string
#include<stdio.h>

int mystrlen(char *p){
    int i=0;
    while(*p != '\0'){
        i++;
        p++;
    }
    return i;
}

int main(){
    char s[30] = "Shyam";
    int x = mystrlen(s);
    printf("The length of %s is = %d",s,x);
    return 0;
}
