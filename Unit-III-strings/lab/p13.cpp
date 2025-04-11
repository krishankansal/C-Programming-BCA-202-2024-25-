// Program 13 - To initialize and print the string
#include<stdio.h>
int main(){
    char x[] = "Welcome to language programming";
    int i=0;
    while(x[i] != '\0'){
        printf("%c",x[i]);
        i++;
    }
    return 0;
}