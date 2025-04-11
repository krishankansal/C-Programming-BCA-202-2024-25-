// Program 20 - To initialize the structure
#include<stdio.h>
int main(){
    struct student{
        int rollno;
        char name[20];
        float percentage;
    };

    struct student x={101,"Shyam",98.34};
    printf("\n Roll No = %d", x.rollno);
    printf("\n Name = %s", x.name);
    printf("\n Percentage = %f",x.percentage);
    return 0;
}
    