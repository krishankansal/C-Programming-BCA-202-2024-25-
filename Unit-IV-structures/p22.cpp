// Program 22 - To initialize the nested structure
#include<stdio.h>
int main(){
    struct address{
        char city[20];
        int pin;
    };
    struct student{
        int rollno;
        char name[20];
        float percentage;
        struct address add;
    };
    struct student x;
    printf("\n Enter rollno :");
    scanf("%d", &x.rollno);
    printf("\n Enter Name :");
    scanf("%s", x.name);
    printf("\n Enter Percentage :");
    scanf("%f", &x.percentage);
    printf("\n Enter City :");
    scanf("%s", x.add.city);
    printf("\n Enter Pin :");
    scanf("%d", &x.add.pin);
    
    printf("\n Roll No = %d", x.rollno);
    printf("\n Name = %s", x.name);
    printf("\n Percentage = %f",x.percentage);
    printf("\n City = %s",x.add.city);
    printf("\n Pin = %d",x.add.pin);
    return 0;
}
