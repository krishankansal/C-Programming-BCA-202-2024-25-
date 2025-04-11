// Program 14 - To count the number of words in string
#include<stdio.h>
int main(){
    char x[] = "Welcome to language programming class";
    int i=0;
    int count = 0;
    while(x[i] != '\0'){
        if(x[i] == ' '){
            count++;
        }        
        i++;
    }
    printf("The total words in string = %d", (count+1));
    return 0;
}