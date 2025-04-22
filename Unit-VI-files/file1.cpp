#include<stdio.h>
int main(){
    FILE *fp = fopen("a.txt","r");
    char ch;
    ch = fgetc(fp);
    while(ch != EOF){
        printf("%c",ch);
        ch = fgetc(fp);
    }
    fclose(fp);
    return 0;
}



