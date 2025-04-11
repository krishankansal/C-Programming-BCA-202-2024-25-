// Program 23 - Array of structures
#include<stdio.h>
int main(){
    struct student{
        int rollno;
        char name[20];        
    };
    typedef struct student student;
    student x[2];
    for(int i=0; i<2; i++){
        printf("\n Enter rollno of student : ");
        scanf("%d",&x[i].rollno);
        printf("Enter name of student : ");
        scanf("%s",&x[i].name);
    }
    // print data in for loop
    for(int j=0; j<2; j++){
        printf("\n RollNo : %d",x[j].rollno);
        printf("\n Name : %s",x[j].name);
    }
    return 0;
}
