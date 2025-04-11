// Program 21 - To initialize the structure
#include<stdio.h>
int main(){
    struct student{
        int rollno;
        char name[20];
        float percentage;
    };
    struct student x;
    printf("\n Enter rollno :");
    scanf("%d", &x.rollno);
    printf("\n Enter Name :");
    scanf("%s", x.name);
    printf("\n Enter Percentage :");
    scanf("%f", &x.percentage);
    
    printf("\n Roll No = %d", x.rollno);
    printf("\n Name = %s", x.name);
    printf("\n Percentage = %f",x.percentage);
    return 0;
}
